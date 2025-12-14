#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
int var_1 = -921351252;
short var_2 = (short)-15278;
short var_3 = (short)14183;
_Bool var_4 = (_Bool)0;
int var_5 = -1435438811;
unsigned char var_6 = (unsigned char)100;
unsigned long long int var_7 = 10976069572298362822ULL;
unsigned long long int var_8 = 1087167949093026024ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)45139;
unsigned char var_11 = (unsigned char)97;
unsigned char var_12 = (unsigned char)27;
signed char var_13 = (signed char)-8;
unsigned int var_14 = 3024405929U;
unsigned char var_15 = (unsigned char)75;
unsigned short var_16 = (unsigned short)37139;
unsigned long long int var_17 = 16432455464835943486ULL;
int zero = 0;
signed char var_18 = (signed char)-45;
short var_19 = (short)-25271;
signed char var_20 = (signed char)19;
signed char var_21 = (signed char)81;
unsigned char var_22 = (unsigned char)40;
unsigned char var_23 = (unsigned char)196;
short var_24 = (short)-10452;
unsigned char var_25 = (unsigned char)107;
long long int var_26 = -2788147979779408281LL;
unsigned char var_27 = (unsigned char)200;
int var_28 = -1813156863;
unsigned long long int var_29 = 13452463382688286087ULL;
unsigned char var_30 = (unsigned char)131;
unsigned long long int var_31 = 7997980564909835497ULL;
short var_32 = (short)22883;
unsigned long long int var_33 = 230514656823462758ULL;
signed char var_34 = (signed char)17;
_Bool var_35 = (_Bool)1;
unsigned short var_36 = (unsigned short)34650;
int var_37 = -1647031763;
short var_38 = (short)-22646;
short var_39 = (short)22729;
unsigned short var_40 = (unsigned short)16335;
unsigned short var_41 = (unsigned short)24747;
unsigned char var_42 = (unsigned char)227;
unsigned char var_43 = (unsigned char)19;
unsigned char var_44 = (unsigned char)18;
unsigned char var_45 = (unsigned char)127;
unsigned int var_46 = 3512131721U;
unsigned int var_47 = 1953609508U;
unsigned short var_48 = (unsigned short)62173;
long long int var_49 = 3339581740879416730LL;
short var_50 = (short)23864;
unsigned short var_51 = (unsigned short)42346;
unsigned long long int var_52 = 12515207114094754825ULL;
unsigned long long int var_53 = 12875178951305549456ULL;
_Bool var_54 = (_Bool)1;
unsigned int var_55 = 1878337539U;
unsigned short var_56 = (unsigned short)59402;
short var_57 = (short)19642;
short var_58 = (short)18260;
unsigned char var_59 = (unsigned char)3;
signed char var_60 = (signed char)-20;
unsigned char var_61 = (unsigned char)30;
short var_62 = (short)2390;
unsigned short arr_2 [18] ;
_Bool arr_3 [18] [18] ;
_Bool arr_10 [18] [18] [18] [18] [18] ;
unsigned char arr_11 [23] ;
unsigned char arr_12 [23] ;
long long int arr_13 [23] [23] ;
unsigned short arr_15 [20] ;
int arr_18 [23] [23] [23] ;
unsigned short arr_19 [23] ;
unsigned long long int arr_20 [23] [23] [23] ;
_Bool arr_21 [23] [23] ;
unsigned char arr_22 [23] [23] [23] ;
_Bool arr_23 [23] [23] [23] [23] ;
signed char arr_24 [23] [23] [23] ;
short arr_28 [23] [23] [23] [23] ;
unsigned long long int arr_35 [23] [23] [23] [23] [23] [23] ;
long long int arr_36 [23] [23] [23] [23] [23] ;
unsigned long long int arr_39 [23] [23] [23] ;
signed char arr_40 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)18903;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = -5568395970837676287LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (unsigned short)40806;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -1454743523;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_19 [i_0] = (unsigned short)36333;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 10100281262242028410ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (short)-11001;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10470747778338265357ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = 5006859319098037920LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 3026339867837226062ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (signed char)99;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
