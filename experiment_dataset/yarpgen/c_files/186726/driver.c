#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-5638;
short var_2 = (short)-26179;
_Bool var_3 = (_Bool)1;
int var_4 = 1672999890;
unsigned short var_5 = (unsigned short)28593;
int var_6 = -1054402852;
short var_7 = (short)11962;
short var_8 = (short)-18354;
unsigned long long int var_9 = 7836131078362987962ULL;
unsigned int var_10 = 2656637214U;
short var_11 = (short)-32639;
long long int var_12 = 1421587489201934259LL;
unsigned long long int var_13 = 15570887977328421335ULL;
long long int var_14 = 7922012038881460738LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)133;
signed char var_17 = (signed char)(-127 - 1);
int zero = 0;
unsigned int var_18 = 3616015497U;
signed char var_19 = (signed char)10;
unsigned short var_20 = (unsigned short)47671;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-106;
long long int var_23 = -1528718982956408566LL;
unsigned short var_24 = (unsigned short)58896;
signed char var_25 = (signed char)-6;
unsigned short var_26 = (unsigned short)9392;
unsigned short var_27 = (unsigned short)55194;
long long int var_28 = 7693760477308213082LL;
short var_29 = (short)17709;
int var_30 = -942454921;
short var_31 = (short)16507;
unsigned char var_32 = (unsigned char)15;
int var_33 = -1261699121;
short var_34 = (short)12100;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 2887392557U;
_Bool var_37 = (_Bool)0;
unsigned short var_38 = (unsigned short)47267;
unsigned int var_39 = 553585176U;
short var_40 = (short)22290;
signed char var_41 = (signed char)-98;
short var_42 = (short)27048;
int var_43 = 1877714573;
_Bool var_44 = (_Bool)0;
short var_45 = (short)28962;
unsigned long long int var_46 = 7051058510584499599ULL;
unsigned int var_47 = 1501991862U;
unsigned long long int var_48 = 14742593356657178716ULL;
unsigned int var_49 = 1390228881U;
long long int var_50 = -2864640238563058461LL;
unsigned long long int var_51 = 17726435317263028305ULL;
unsigned char var_52 = (unsigned char)37;
short var_53 = (short)30915;
short var_54 = (short)-17222;
short var_55 = (short)-16986;
_Bool var_56 = (_Bool)1;
short var_57 = (short)7747;
short var_58 = (short)-12748;
short var_59 = (short)-3117;
unsigned short var_60 = (unsigned short)10928;
long long int var_61 = -1213042374681803172LL;
unsigned char var_62 = (unsigned char)90;
unsigned long long int var_63 = 17038326722844712290ULL;
unsigned short var_64 = (unsigned short)11637;
signed char var_65 = (signed char)-76;
short var_66 = (short)29838;
short var_67 = (short)-16473;
short var_68 = (short)-20925;
short var_69 = (short)-31100;
short var_70 = (short)26715;
unsigned char var_71 = (unsigned char)47;
short var_72 = (short)-4938;
unsigned short var_73 = (unsigned short)19410;
short var_74 = (short)15360;
unsigned char var_75 = (unsigned char)4;
unsigned char var_76 = (unsigned char)39;
signed char var_77 = (signed char)-22;
int var_78 = -573323177;
_Bool var_79 = (_Bool)0;
int var_80 = 1362710125;
unsigned long long int var_81 = 4170832610883396679ULL;
long long int var_82 = -5711806777915146660LL;
unsigned short var_83 = (unsigned short)51243;
long long int var_84 = -8106320989184679518LL;
_Bool var_85 = (_Bool)0;
_Bool var_86 = (_Bool)0;
unsigned long long int var_87 = 6206845981784071051ULL;
short var_88 = (short)-12565;
unsigned short var_89 = (unsigned short)6368;
short var_90 = (short)-23603;
signed char var_91 = (signed char)-37;
int arr_15 [13] [13] ;
short arr_20 [17] ;
_Bool arr_23 [11] ;
short arr_54 [25] [25] [25] [25] [25] ;
short arr_55 [25] [25] [25] [25] [25] [25] [25] ;
signed char arr_68 [25] [25] ;
unsigned int arr_91 [25] [25] [25] [25] [25] ;
long long int arr_96 [25] [25] [25] ;
unsigned int arr_100 [25] [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_103 [25] ;
unsigned char arr_104 [25] ;
unsigned int arr_107 [24] ;
_Bool arr_108 [24] ;
signed char arr_109 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? -1524955627 : 1957029416;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (short)-16069;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)3863 : (short)10120;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? (short)-21895 : (short)-27338;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_68 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)29 : (signed char)50;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_91 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 1115436895U : 4036287364U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_96 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 38934141308786224LL : -7590039182970255157LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 3547923207U : 3947180774U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_103 [i_0] = (i_0 % 2 == 0) ? 13538477292889369960ULL : 12029637143634572412ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_104 [i_0] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_107 [i_0] = 3309225549U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_108 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_109 [i_0] = (signed char)-68;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
    hash(&seed, var_85);
    hash(&seed, var_86);
    hash(&seed, var_87);
    hash(&seed, var_88);
    hash(&seed, var_89);
    hash(&seed, var_90);
    hash(&seed, var_91);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                hash(&seed, arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_68 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_91 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_96 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                hash(&seed, arr_100 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_103 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_104 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_107 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_108 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_109 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
