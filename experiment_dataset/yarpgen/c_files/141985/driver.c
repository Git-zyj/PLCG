#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)117;
short var_1 = (short)-8816;
int var_2 = 1744708309;
_Bool var_3 = (_Bool)0;
int var_4 = -1937708304;
signed char var_5 = (signed char)-8;
short var_6 = (short)905;
unsigned int var_7 = 3527134987U;
unsigned char var_8 = (unsigned char)165;
unsigned char var_9 = (unsigned char)32;
short var_10 = (short)-7347;
short var_11 = (short)-11631;
int var_12 = -784342314;
signed char var_13 = (signed char)-116;
unsigned int var_14 = 3491137728U;
long long int var_15 = 7120380165464135613LL;
int zero = 0;
unsigned int var_16 = 660093295U;
unsigned char var_17 = (unsigned char)133;
int var_18 = 567604690;
int var_19 = -689268320;
unsigned char var_20 = (unsigned char)157;
unsigned char var_21 = (unsigned char)25;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)-21;
signed char var_24 = (signed char)-22;
unsigned int var_25 = 1179937008U;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)89;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
int var_30 = -1730452710;
signed char var_31 = (signed char)106;
long long int var_32 = -8580766958000685069LL;
signed char var_33 = (signed char)51;
_Bool var_34 = (_Bool)1;
unsigned char var_35 = (unsigned char)119;
short var_36 = (short)-21403;
unsigned int var_37 = 2602855693U;
short var_38 = (short)15605;
signed char var_39 = (signed char)-125;
signed char var_40 = (signed char)-34;
signed char var_41 = (signed char)102;
signed char var_42 = (signed char)-66;
long long int var_43 = -8153163314254413681LL;
short var_44 = (short)-3180;
unsigned char var_45 = (unsigned char)84;
unsigned char var_46 = (unsigned char)210;
_Bool var_47 = (_Bool)1;
unsigned char var_48 = (unsigned char)175;
_Bool var_49 = (_Bool)1;
short var_50 = (short)-6796;
signed char var_51 = (signed char)113;
signed char var_52 = (signed char)109;
long long int var_53 = 4626831326595113013LL;
short var_54 = (short)897;
signed char var_55 = (signed char)-122;
signed char var_56 = (signed char)-58;
int var_57 = 1598733750;
unsigned char var_58 = (unsigned char)102;
short var_59 = (short)-30189;
short var_60 = (short)16673;
long long int var_61 = 406524460572112195LL;
short var_62 = (short)8840;
signed char var_63 = (signed char)106;
long long int var_64 = 8925552595845404148LL;
unsigned char var_65 = (unsigned char)113;
short var_66 = (short)-20797;
signed char var_67 = (signed char)104;
unsigned int var_68 = 3272331789U;
int var_69 = 1770692977;
short var_70 = (short)-32026;
_Bool var_71 = (_Bool)1;
unsigned char var_72 = (unsigned char)58;
signed char var_73 = (signed char)-86;
unsigned int var_74 = 1879891983U;
signed char var_75 = (signed char)92;
short var_76 = (short)23430;
short var_77 = (short)-17782;
signed char var_78 = (signed char)3;
short var_79 = (short)29302;
short var_80 = (short)14719;
unsigned int var_81 = 1933809013U;
signed char var_82 = (signed char)62;
signed char var_83 = (signed char)14;
signed char var_84 = (signed char)58;
short var_85 = (short)-262;
_Bool var_86 = (_Bool)0;
unsigned int var_87 = 4031568307U;
signed char var_88 = (signed char)17;
short var_89 = (short)-12928;
signed char var_90 = (signed char)-4;
signed char var_91 = (signed char)-80;
unsigned int var_92 = 1387465277U;
signed char var_93 = (signed char)40;
unsigned int var_94 = 777596309U;
_Bool var_95 = (_Bool)0;
unsigned int var_96 = 3430709742U;
short var_97 = (short)-5227;
_Bool var_98 = (_Bool)1;
unsigned int var_99 = 3774472104U;
short var_100 = (short)6831;
signed char var_101 = (signed char)-17;
long long int var_102 = 3438003081789157537LL;
short var_103 = (short)-26735;
signed char var_104 = (signed char)60;
short var_105 = (short)12162;
signed char var_106 = (signed char)86;
long long int arr_14 [15] [15] [15] [15] [15] [15] ;
long long int arr_17 [11] ;
_Bool arr_35 [25] [25] [25] [25] [25] [25] ;
short arr_40 [25] [25] [25] [25] [25] ;
short arr_41 [25] [25] [25] [25] ;
_Bool arr_44 [25] [25] [25] ;
long long int arr_45 [25] [25] [25] ;
unsigned int arr_66 [25] ;
int arr_75 [25] [25] ;
short arr_91 [25] [25] [25] [25] ;
unsigned char arr_107 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 3315975208049055300LL : -2031695846530563497LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = -4072048049007596233LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)-19921 : (short)-25438;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-9426 : (short)-31305;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = -7759687003807564335LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_66 [i_0] = 3371111037U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_75 [i_0] [i_1] = 863087429;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = (short)-21328;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_107 [i_0] = (i_0 % 2 == 0) ? (unsigned char)71 : (unsigned char)200;
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
    hash(&seed, var_100);
    hash(&seed, var_101);
    hash(&seed, var_102);
    hash(&seed, var_103);
    hash(&seed, var_104);
    hash(&seed, var_105);
    hash(&seed, var_106);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_41 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_44 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_45 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_66 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_75 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_91 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_107 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
