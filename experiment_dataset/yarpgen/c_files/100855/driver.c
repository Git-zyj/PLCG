#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3134682778U;
unsigned long long int var_1 = 12875964285791561422ULL;
unsigned int var_3 = 3220495603U;
signed char var_4 = (signed char)-62;
long long int var_5 = -5045498235338887944LL;
short var_8 = (short)1862;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)13;
unsigned char var_13 = (unsigned char)227;
int var_17 = 592940507;
int zero = 0;
unsigned long long int var_19 = 4862741966729261596ULL;
signed char var_20 = (signed char)115;
unsigned long long int var_21 = 12613419780987183453ULL;
int var_22 = 1748929270;
unsigned int var_23 = 693285454U;
short var_24 = (short)13706;
unsigned char var_25 = (unsigned char)139;
short var_26 = (short)-1516;
int var_27 = -1704397541;
unsigned long long int var_28 = 942329452589406798ULL;
unsigned char var_29 = (unsigned char)244;
unsigned char var_30 = (unsigned char)230;
unsigned int var_31 = 1672767944U;
unsigned int var_32 = 4089343025U;
long long int var_33 = 8822532103275257126LL;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 1185908902U;
signed char var_36 = (signed char)-67;
unsigned char var_37 = (unsigned char)60;
short var_38 = (short)-20581;
_Bool var_39 = (_Bool)1;
long long int var_40 = 746341173510057101LL;
unsigned short var_41 = (unsigned short)35822;
signed char var_42 = (signed char)-100;
short var_43 = (short)15807;
signed char var_44 = (signed char)-82;
unsigned int var_45 = 1066442190U;
short var_46 = (short)14755;
long long int var_47 = 7470700974749191950LL;
unsigned short var_48 = (unsigned short)11062;
unsigned int var_49 = 43105058U;
unsigned int var_50 = 3369576274U;
int var_51 = -744482769;
unsigned char var_52 = (unsigned char)82;
_Bool var_53 = (_Bool)1;
long long int var_54 = 108665288751104304LL;
signed char var_55 = (signed char)-2;
unsigned int var_56 = 1174743186U;
signed char var_57 = (signed char)-94;
unsigned int var_58 = 3942136681U;
_Bool var_59 = (_Bool)0;
int var_60 = 1805251124;
unsigned char var_61 = (unsigned char)177;
unsigned int var_62 = 4212513232U;
_Bool var_63 = (_Bool)0;
int var_64 = -80666456;
short var_65 = (short)-23050;
unsigned int var_66 = 1797709113U;
signed char var_67 = (signed char)-89;
signed char var_68 = (signed char)62;
unsigned short var_69 = (unsigned short)49105;
short var_70 = (short)-30370;
unsigned int var_71 = 349665429U;
short var_72 = (short)19321;
_Bool var_73 = (_Bool)0;
unsigned char var_74 = (unsigned char)90;
unsigned int var_75 = 2999370957U;
long long int var_76 = -749083353043017635LL;
long long int var_77 = 6051055721629830793LL;
unsigned short var_78 = (unsigned short)64097;
short var_79 = (short)24899;
unsigned short var_80 = (unsigned short)57939;
unsigned short var_81 = (unsigned short)11101;
unsigned int var_82 = 2776402348U;
signed char var_83 = (signed char)15;
int arr_0 [12] ;
short arr_1 [12] ;
unsigned int arr_3 [12] ;
unsigned int arr_4 [12] [12] ;
_Bool arr_5 [12] [12] [12] ;
unsigned long long int arr_9 [12] [12] [12] [12] ;
int arr_12 [12] ;
unsigned char arr_14 [12] [12] [12] ;
long long int arr_15 [12] [12] [12] ;
short arr_16 [12] [12] [12] [12] ;
unsigned int arr_20 [12] ;
_Bool arr_21 [12] [12] [12] [12] ;
short arr_28 [12] [12] ;
unsigned short arr_30 [13] ;
_Bool arr_31 [13] ;
unsigned char arr_32 [13] [13] [13] ;
int arr_33 [13] [13] [13] ;
_Bool arr_34 [13] ;
unsigned char arr_36 [13] [13] [13] ;
unsigned short arr_37 [13] [13] [13] [13] ;
unsigned char arr_38 [13] [13] [13] [13] ;
unsigned long long int arr_40 [13] [13] [13] [13] [13] [13] [13] ;
int arr_41 [13] [13] [13] [13] [13] ;
unsigned char arr_45 [13] [13] ;
unsigned char arr_47 [13] [13] ;
signed char arr_48 [13] ;
signed char arr_51 [13] ;
int arr_53 [13] [13] [13] ;
unsigned int arr_56 [13] ;
unsigned short arr_59 [13] [13] [13] [13] [13] [13] [13] ;
short arr_61 [13] [13] [13] [13] [13] ;
unsigned int arr_63 [13] [13] [13] ;
short arr_67 [13] [13] [13] [13] [13] [13] [13] ;
unsigned char arr_71 [13] [13] [13] ;
unsigned long long int arr_84 [21] [21] ;
unsigned int arr_85 [21] [21] ;
long long int arr_86 [21] ;
short arr_87 [21] [21] [21] ;
unsigned short arr_88 [21] [21] [21] ;
unsigned char arr_89 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -729214160;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-7108;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 3171295595U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 836132809U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 16255635171339059194ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = 2103225435;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -9211216917730519792LL : -3481396400875535257LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-29455 : (short)-14767;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 3082144989U : 2511730926U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)20251 : (short)-8529;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = (unsigned short)41869;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 320258579;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned short)3875;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 5445690865980020067ULL : 6109186491120609357ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = -1129883729;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_45 [i_0] [i_1] = (unsigned char)111;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_48 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_51 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = 678827204;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_56 [i_0] = 1628275692U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)12758;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)24860 : (short)10628;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_63 [i_0] [i_1] [i_2] = 293429144U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_67 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)18189;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_71 [i_0] [i_1] [i_2] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_84 [i_0] [i_1] = 11677061771721819880ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_85 [i_0] [i_1] = 1180536386U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_86 [i_0] = 111893498610475338LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_87 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)17572 : (short)-20724;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_88 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)5474 : (unsigned short)17829;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_89 [i_0] [i_1] [i_2] = (unsigned char)60;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
