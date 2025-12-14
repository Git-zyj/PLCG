#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
signed char var_1 = (signed char)53;
long long int var_2 = -455491798579005171LL;
short var_3 = (short)18081;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)83;
int var_6 = 1829137617;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)18;
int var_9 = -657664917;
unsigned int var_10 = 1210297388U;
int var_11 = 1278107808;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)51493;
long long int var_14 = 5331959595923151407LL;
unsigned char var_15 = (unsigned char)243;
int zero = 0;
signed char var_16 = (signed char)-112;
short var_17 = (short)-29592;
short var_18 = (short)-21759;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)16940;
unsigned int var_21 = 2973358883U;
short var_22 = (short)6522;
int var_23 = -17889363;
unsigned long long int var_24 = 3416191983027204410ULL;
signed char var_25 = (signed char)85;
unsigned int var_26 = 3217973690U;
unsigned char var_27 = (unsigned char)6;
unsigned int var_28 = 3110310164U;
unsigned int var_29 = 2269078844U;
unsigned char var_30 = (unsigned char)69;
short var_31 = (short)-19100;
unsigned long long int var_32 = 382823807381663316ULL;
unsigned char var_33 = (unsigned char)220;
signed char var_34 = (signed char)-52;
signed char var_35 = (signed char)2;
unsigned char var_36 = (unsigned char)142;
unsigned long long int var_37 = 6548592564009818220ULL;
unsigned char var_38 = (unsigned char)107;
signed char var_39 = (signed char)85;
int var_40 = -673457264;
unsigned char var_41 = (unsigned char)15;
unsigned int var_42 = 3624177229U;
unsigned short var_43 = (unsigned short)28952;
unsigned short var_44 = (unsigned short)11133;
_Bool var_45 = (_Bool)0;
long long int var_46 = 1013812705879489890LL;
unsigned char var_47 = (unsigned char)53;
_Bool var_48 = (_Bool)1;
unsigned char var_49 = (unsigned char)141;
unsigned char var_50 = (unsigned char)252;
short var_51 = (short)29571;
short var_52 = (short)-28920;
signed char var_53 = (signed char)29;
unsigned int var_54 = 1452519818U;
unsigned int var_55 = 357501515U;
short var_56 = (short)7217;
_Bool var_57 = (_Bool)0;
unsigned short var_58 = (unsigned short)32835;
unsigned char var_59 = (unsigned char)70;
short var_60 = (short)13804;
int var_61 = -1456310216;
unsigned int var_62 = 234153357U;
unsigned short var_63 = (unsigned short)32457;
signed char var_64 = (signed char)-3;
_Bool var_65 = (_Bool)1;
signed char var_66 = (signed char)-8;
unsigned short var_67 = (unsigned short)53581;
_Bool var_68 = (_Bool)0;
int var_69 = -1872248946;
short var_70 = (short)-15661;
long long int var_71 = -4888330388174559369LL;
unsigned short var_72 = (unsigned short)20180;
signed char var_73 = (signed char)-43;
unsigned int var_74 = 2222827788U;
int var_75 = 602861850;
unsigned short var_76 = (unsigned short)50468;
unsigned short var_77 = (unsigned short)51074;
_Bool var_78 = (_Bool)1;
unsigned char var_79 = (unsigned char)229;
short var_80 = (short)-11674;
unsigned int var_81 = 141230858U;
short var_82 = (short)-15606;
signed char var_83 = (signed char)-15;
unsigned short var_84 = (unsigned short)417;
unsigned short var_85 = (unsigned short)21981;
_Bool var_86 = (_Bool)0;
unsigned int var_87 = 1611094215U;
unsigned int var_88 = 3867219487U;
int var_89 = -1331360866;
short var_90 = (short)-14580;
unsigned int var_91 = 766348324U;
unsigned char var_92 = (unsigned char)186;
signed char var_93 = (signed char)-85;
_Bool var_94 = (_Bool)0;
unsigned char var_95 = (unsigned char)66;
unsigned char var_96 = (unsigned char)41;
_Bool var_97 = (_Bool)0;
unsigned int var_98 = 2141725060U;
unsigned short var_99 = (unsigned short)46637;
unsigned short arr_1 [24] [24] ;
unsigned char arr_2 [24] [24] ;
signed char arr_3 [24] [24] ;
short arr_6 [24] [24] [24] ;
signed char arr_9 [24] [24] [24] ;
unsigned short arr_18 [24] [24] [24] [24] ;
int arr_19 [24] [24] [24] [24] ;
unsigned char arr_20 [24] [24] [24] [24] ;
unsigned int arr_21 [24] [24] [24] [24] ;
signed char arr_24 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_29 [24] ;
short arr_33 [24] [24] ;
short arr_35 [24] ;
unsigned char arr_41 [24] [24] [24] [24] [24] ;
_Bool arr_48 [24] [24] ;
unsigned long long int arr_50 [24] [24] [24] ;
unsigned short arr_52 [24] [24] ;
signed char arr_53 [24] [24] [24] [24] ;
unsigned short arr_58 [21] [21] ;
int arr_62 [21] [21] [21] ;
short arr_63 [21] [21] ;
unsigned int arr_67 [21] [21] [21] [21] ;
unsigned short arr_74 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_110 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)21385 : (unsigned short)24362;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)19261 : (short)-27178;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)11325 : (unsigned short)43683;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 1439426801;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)170;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 1347576176U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = 2474211533U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_33 [i_0] [i_1] = (short)-28476;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (short)-14655 : (short)-6635;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned char)29 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_48 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15031708806120534839ULL : 9992947535818373294ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_52 [i_0] [i_1] = (unsigned short)5668;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_58 [i_0] [i_1] = (unsigned short)2846;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = -1255421739;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_63 [i_0] [i_1] = (short)-26345;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = 1257705392U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_74 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)33807;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_110 [i_0] = (i_0 % 2 == 0) ? (unsigned char)35 : (unsigned char)80;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_92);
    hash(&seed, var_93);
    hash(&seed, var_94);
    hash(&seed, var_95);
    hash(&seed, var_96);
    hash(&seed, var_97);
    hash(&seed, var_98);
    hash(&seed, var_99);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
