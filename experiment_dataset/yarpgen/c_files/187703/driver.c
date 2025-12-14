#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1296827914;
signed char var_3 = (signed char)-80;
short var_4 = (short)-11495;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)230;
int var_7 = 920769732;
unsigned short var_8 = (unsigned short)55404;
int var_9 = -1026924810;
signed char var_10 = (signed char)7;
unsigned short var_11 = (unsigned short)51841;
unsigned short var_12 = (unsigned short)21360;
int zero = 0;
unsigned char var_13 = (unsigned char)112;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3463030966237270660LL;
int var_16 = -1604394037;
short var_17 = (short)-6096;
short var_18 = (short)-7652;
unsigned char var_19 = (unsigned char)167;
unsigned short var_20 = (unsigned short)59405;
unsigned short var_21 = (unsigned short)8144;
unsigned long long int var_22 = 468508898091386813ULL;
unsigned int var_23 = 3104761097U;
signed char var_24 = (signed char)79;
signed char var_25 = (signed char)41;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)63475;
int var_28 = -690432767;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 564547094U;
short var_31 = (short)-31864;
signed char var_32 = (signed char)73;
_Bool var_33 = (_Bool)0;
long long int var_34 = 6438854786254984118LL;
_Bool var_35 = (_Bool)1;
short var_36 = (short)-14234;
short var_37 = (short)27100;
_Bool var_38 = (_Bool)1;
unsigned int var_39 = 3998011834U;
unsigned short var_40 = (unsigned short)45098;
signed char var_41 = (signed char)-45;
int var_42 = 2022424845;
unsigned short var_43 = (unsigned short)8159;
int var_44 = -1664674358;
signed char var_45 = (signed char)19;
_Bool var_46 = (_Bool)1;
unsigned short var_47 = (unsigned short)58105;
long long int var_48 = -6329683097500436167LL;
_Bool arr_3 [16] [16] [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
int arr_6 [16] [16] [16] ;
signed char arr_9 [16] [16] [16] [16] ;
unsigned short arr_13 [16] [16] [16] [16] [16] [16] ;
short arr_17 [16] ;
unsigned long long int arr_20 [16] [16] [16] [16] [16] ;
unsigned short arr_28 [18] [18] [18] ;
_Bool arr_37 [18] [18] [18] [18] [18] ;
long long int arr_54 [23] ;
unsigned char arr_56 [23] [23] [23] ;
int arr_63 [23] [23] [23] [23] ;
unsigned long long int arr_68 [23] [23] ;
unsigned short arr_70 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8583918691374925408ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -580783840;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)29150;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (short)23064;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 4114213617998222534ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (unsigned short)24253;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_54 [i_0] = 6775316975107677077LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_63 [i_0] [i_1] [i_2] [i_3] = 1661670866;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_68 [i_0] [i_1] = (i_1 % 2 == 0) ? 8087774004212430868ULL : 14056934767218432897ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)36746 : (unsigned short)48961;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
