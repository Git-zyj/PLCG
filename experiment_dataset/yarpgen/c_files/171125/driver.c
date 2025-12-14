#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -264855407;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 16532557093047363ULL;
unsigned long long int var_4 = 4197259891817213114ULL;
unsigned short var_5 = (unsigned short)24752;
int var_6 = 127269079;
int var_7 = -958580483;
int var_8 = -1208174064;
signed char var_9 = (signed char)-90;
signed char var_10 = (signed char)-29;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 17963950808266729937ULL;
unsigned char var_13 = (unsigned char)141;
signed char var_14 = (signed char)-111;
signed char var_15 = (signed char)73;
signed char var_16 = (signed char)86;
int var_17 = 1534029757;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)6458;
signed char var_20 = (signed char)26;
short var_21 = (short)-28943;
unsigned short var_22 = (unsigned short)33119;
unsigned int var_23 = 3044664473U;
unsigned long long int var_24 = 12268551210997167425ULL;
signed char var_25 = (signed char)55;
unsigned long long int var_26 = 7564584811448022691ULL;
unsigned short var_27 = (unsigned short)33934;
unsigned int var_28 = 1113014738U;
signed char var_29 = (signed char)-94;
int var_30 = -2123542989;
unsigned int var_31 = 3359786234U;
int var_32 = 605969458;
unsigned char var_33 = (unsigned char)63;
unsigned int var_34 = 898826630U;
unsigned long long int var_35 = 10038911941641919705ULL;
unsigned long long int var_36 = 8482779201683868831ULL;
unsigned short var_37 = (unsigned short)29725;
int var_38 = 428019267;
unsigned short var_39 = (unsigned short)8527;
_Bool var_40 = (_Bool)0;
unsigned short var_41 = (unsigned short)46623;
unsigned char var_42 = (unsigned char)31;
unsigned char var_43 = (unsigned char)83;
signed char var_44 = (signed char)30;
unsigned short var_45 = (unsigned short)58325;
signed char var_46 = (signed char)104;
unsigned int var_47 = 1950208457U;
unsigned int var_48 = 402850332U;
long long int var_49 = 2629507613035523922LL;
int var_50 = -1945056002;
_Bool var_51 = (_Bool)0;
unsigned short var_52 = (unsigned short)63250;
long long int var_53 = 1455557282449342301LL;
signed char var_54 = (signed char)65;
_Bool var_55 = (_Bool)1;
unsigned long long int var_56 = 1043444401608416862ULL;
unsigned int var_57 = 3131722306U;
unsigned long long int var_58 = 16076993134877312453ULL;
unsigned short var_59 = (unsigned short)18635;
signed char var_60 = (signed char)111;
_Bool var_61 = (_Bool)0;
unsigned long long int var_62 = 15885542849217392761ULL;
_Bool var_63 = (_Bool)0;
unsigned short var_64 = (unsigned short)59562;
unsigned long long int var_65 = 12750113090544883386ULL;
unsigned long long int var_66 = 11198058272991190323ULL;
signed char var_67 = (signed char)-34;
long long int var_68 = 2578625278068772938LL;
signed char var_69 = (signed char)-7;
signed char var_70 = (signed char)-83;
short var_71 = (short)-16183;
int var_72 = 1018119886;
unsigned short var_73 = (unsigned short)14964;
signed char var_74 = (signed char)-18;
int var_75 = -1871650027;
signed char var_76 = (signed char)-58;
int var_77 = 1934674782;
unsigned short var_78 = (unsigned short)35930;
_Bool var_79 = (_Bool)1;
unsigned long long int var_80 = 7065644963085351935ULL;
_Bool var_81 = (_Bool)0;
_Bool var_82 = (_Bool)0;
int var_83 = 266294021;
short var_84 = (short)-23489;
unsigned short var_85 = (unsigned short)61070;
unsigned short var_86 = (unsigned short)49202;
unsigned long long int var_87 = 1584751214623214129ULL;
int var_88 = 1509423897;
_Bool var_89 = (_Bool)1;
short var_90 = (short)3001;
int arr_0 [17] [17] ;
int arr_1 [17] [17] ;
unsigned short arr_2 [11] ;
unsigned short arr_3 [11] [11] ;
short arr_6 [11] ;
signed char arr_10 [11] [11] [11] [11] ;
unsigned long long int arr_12 [11] [11] [11] [11] ;
int arr_13 [11] [11] [11] ;
unsigned long long int arr_15 [11] [11] ;
signed char arr_16 [11] [11] [11] [11] ;
unsigned long long int arr_17 [11] [11] [11] [11] [11] ;
_Bool arr_18 [11] [11] [11] [11] ;
long long int arr_21 [11] [11] ;
int arr_23 [11] ;
long long int arr_33 [11] [11] [11] [11] ;
signed char arr_34 [11] [11] [11] [11] ;
unsigned char arr_35 [11] [11] [11] [11] [11] [11] ;
_Bool arr_36 [11] [11] [11] ;
signed char arr_53 [12] [12] ;
_Bool arr_55 [25] [25] ;
long long int arr_56 [25] [25] ;
_Bool arr_57 [16] ;
signed char arr_59 [16] ;
unsigned short arr_61 [16] [16] ;
_Bool arr_62 [16] [16] ;
_Bool arr_67 [16] [16] [16] [16] ;
int arr_70 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -1676398725 : -1041874968;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -2045484852;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29442 : (unsigned short)11491;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)59670;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-5338;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-70 : (signed char)12;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 10512676227643127461ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -338929750;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 18173292320036244649ULL : 13878863479824654024ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 13716089892493442692ULL : 17209559534465207231ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? -8978223185507856683LL : -2350978790069822290LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = -981950702;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8177203532968105826LL : -2838954756496926896LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_53 [i_0] [i_1] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_55 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_56 [i_0] [i_1] = -8889854458754883588LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_57 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_59 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_61 [i_0] [i_1] = (unsigned short)14287;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_62 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_70 [i_0] = -949875873;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
