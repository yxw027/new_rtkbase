/****************************************************************************
** Meta object code from reading C++ file 'gestionconfig.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "gestionconfig.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gestionconfig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GestionConfig[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   27,   27,   27, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,   27,   27,   27, 0x0a,
      48,   27,   27,   27, 0x0a,
      65,   27,   27,   27, 0x0a,
      74,   27,   27,   27, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GestionConfig[] = {
    "GestionConfig\0DemandeMAJ()\0\0"
    "OuvreChoixNouveau()\0OuvreChoixEdit()\0"
    "Retour()\0Affiche()\0"
};

void GestionConfig::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GestionConfig *_t = static_cast<GestionConfig *>(_o);
        switch (_id) {
        case 0: _t->DemandeMAJ(); break;
        case 1: _t->OuvreChoixNouveau(); break;
        case 2: _t->OuvreChoixEdit(); break;
        case 3: _t->Retour(); break;
        case 4: _t->Affiche(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GestionConfig::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GestionConfig::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GestionConfig,
      qt_meta_data_GestionConfig, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GestionConfig::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GestionConfig::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GestionConfig::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GestionConfig))
        return static_cast<void*>(const_cast< GestionConfig*>(this));
    return QDialog::qt_metacast(_clname);
}

int GestionConfig::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GestionConfig::DemandeMAJ()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
