#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)12554;
short var_2 = (short)25087;
short var_7 = (short)-26559;
unsigned char var_10 = (unsigned char)122;
int zero = 0;
long long int var_13 = -5119573100046956317LL;
int var_14 = 1636625414;
short var_15 = (short)13194;
unsigned short var_16 = (unsigned short)58504;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)82;
unsigned char var_19 = (unsigned char)223;
short var_20 = (short)-20559;
long long int var_21 = 2373693232846922508LL;
unsigned char var_22 = (unsigned char)186;
unsigned short var_23 = (unsigned short)49382;
unsigned short var_24 = (unsigned short)3536;
unsigned short var_25 = (unsigned short)57805;
long long int var_26 = 2077717435162574849LL;
int var_27 = -1757386811;
unsigned short var_28 = (unsigned short)64066;
unsigned char var_29 = (unsigned char)81;
int var_30 = -1035665330;
unsigned char var_31 = (unsigned char)18;
int var_32 = 1726371034;
unsigned char var_33 = (unsigned char)21;
short var_34 = (short)23422;
unsigned short var_35 = (unsigned short)15719;
int var_36 = 1793813086;
_Bool var_37 = (_Bool)0;
int var_38 = 1482604773;
unsigned char var_39 = (unsigned char)217;
unsigned char var_40 = (unsigned char)116;
unsigned short var_41 = (unsigned short)3619;
int var_42 = -866821838;
short var_43 = (short)-31569;
long long int var_44 = 7029656871418985564LL;
long long int var_45 = 6789114012857680832LL;
short var_46 = (short)28157;
int var_47 = 1781363303;
unsigned long long int var_48 = 233171293626470448ULL;
long long int var_49 = 4101479924814116381LL;
short var_50 = (short)32126;
long long int var_51 = -7164509081007069752LL;
int var_52 = 1190609453;
short var_53 = (short)-3009;
_Bool var_54 = (_Bool)1;
short var_55 = (short)26570;
long long int var_56 = 2927819702338203553LL;
unsigned short var_57 = (unsigned short)44485;
long long int var_58 = 5022289144777959443LL;
long long int var_59 = -8320485064928471181LL;
short var_60 = (short)-30737;
short var_61 = (short)19328;
int var_62 = -777566365;
short var_63 = (short)-22438;
short var_64 = (short)-21920;
int var_65 = -105940472;
long long int var_66 = 115222679805794170LL;
_Bool var_67 = (_Bool)0;
unsigned short var_68 = (unsigned short)30691;
long long int var_69 = 4240549598641215845LL;
unsigned char var_70 = (unsigned char)79;
unsigned short arr_0 [24] ;
int arr_1 [24] ;
short arr_2 [21] [21] ;
int arr_3 [21] [21] ;
short arr_4 [21] ;
unsigned short arr_5 [21] ;
unsigned short arr_6 [21] [21] ;
unsigned short arr_7 [21] [21] ;
short arr_8 [21] [21] [21] ;
unsigned short arr_10 [21] [21] [21] ;
unsigned char arr_12 [21] [21] ;
unsigned char arr_13 [21] ;
long long int arr_14 [21] ;
short arr_15 [21] [21] [21] ;
short arr_16 [21] [21] ;
int arr_19 [21] [21] [21] [21] ;
short arr_20 [21] [21] ;
unsigned short arr_21 [21] [21] [21] [21] ;
short arr_24 [21] [21] [21] [21] [21] ;
int arr_26 [21] [21] ;
int arr_27 [21] ;
short arr_29 [21] [21] [21] ;
short arr_33 [21] [21] [21] ;
short arr_36 [21] [21] ;
int arr_37 [21] [21] [21] [21] ;
unsigned char arr_40 [21] ;
long long int arr_44 [21] ;
_Bool arr_46 [21] [21] [21] [21] [21] [21] [21] ;
short arr_52 [21] [21] [21] [21] ;
int arr_54 [21] [21] [21] [21] ;
unsigned short arr_55 [21] [21] [21] ;
long long int arr_62 [25] ;
int arr_63 [25] ;
short arr_64 [25] [25] ;
short arr_67 [25] ;
short arr_9 [21] [21] ;
int arr_17 [21] ;
_Bool arr_39 [21] [21] [21] [21] [21] [21] ;
int arr_51 [21] [21] [21] ;
int arr_60 [21] [21] [21] [21] ;
short arr_65 [25] ;
_Bool arr_70 [16] ;
unsigned char arr_71 [16] ;
short arr_84 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)63774;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2122772861;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-28476;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 618348278;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (short)-25723;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)58308;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)18715;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)65107;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)3923;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)5625;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 7221866335637215640LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)18494;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (short)23981;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 2084049594;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)8565 : (short)28788;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)17054;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)7451;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_26 [i_0] [i_1] = 32768155;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = -1222155991;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-23669 : (short)15552;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)26575 : (short)19291;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_36 [i_0] [i_1] = (short)-13741;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 1061260564;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_44 [i_0] = 2862408337042504096LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)11742 : (short)21862;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 40060273;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)28778 : (unsigned short)2518;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_62 [i_0] = -8940817362887949317LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_63 [i_0] = 1071757150;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_64 [i_0] [i_1] = (short)-20328;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_67 [i_0] = (short)-14084;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (short)3941;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = -167113482;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = 1436062;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_60 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -1749340274 : 1897139875;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_65 [i_0] = (short)-24992;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_70 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_71 [i_0] = (i_0 % 2 == 0) ? (unsigned char)234 : (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_84 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-10566 : (short)19777;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_51 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    hash(&seed, arr_60 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_65 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_70 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_71 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    hash(&seed, arr_84 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
