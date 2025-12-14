#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8937930776263845626LL;
unsigned short var_4 = (unsigned short)63577;
unsigned int var_5 = 3041846421U;
long long int var_6 = 6806329877398243336LL;
unsigned char var_7 = (unsigned char)111;
unsigned int var_8 = 79759043U;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)56298;
long long int var_12 = -1552131336026755184LL;
unsigned char var_14 = (unsigned char)58;
long long int var_16 = -7350258917276437515LL;
short var_17 = (short)5856;
unsigned int var_19 = 3456400806U;
int zero = 0;
unsigned char var_20 = (unsigned char)227;
int var_21 = 141653958;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)43844;
long long int var_25 = -6779654153693831820LL;
short var_26 = (short)22084;
_Bool var_27 = (_Bool)1;
long long int var_28 = 373463091993319013LL;
unsigned short var_29 = (unsigned short)51375;
unsigned int var_30 = 2014301708U;
unsigned int var_31 = 500990195U;
short var_32 = (short)31891;
long long int var_33 = 787143391324907660LL;
unsigned short var_34 = (unsigned short)44196;
long long int var_35 = -7611931246105855511LL;
long long int arr_0 [11] ;
_Bool arr_1 [11] [11] ;
short arr_2 [11] [11] ;
int arr_6 [14] ;
long long int arr_8 [14] ;
long long int arr_9 [14] [14] ;
int arr_10 [14] ;
long long int arr_12 [14] [14] ;
unsigned short arr_17 [19] ;
int arr_18 [19] [19] ;
_Bool arr_21 [18] ;
int arr_3 [11] ;
unsigned int arr_4 [11] ;
_Bool arr_5 [11] ;
unsigned char arr_13 [14] ;
int arr_22 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2246932050682563847LL : 4938170051787050621LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)3630 : (short)8201;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -179566935;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -7220145850572359449LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = 1645493537370415201LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 1722498183;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 890714448993177656LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (unsigned short)25301;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_18 [i_0] [i_1] = -957943859;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -3699087 : -503733513;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 579575218U : 532249646U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = -1622177752;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
