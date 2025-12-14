#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 740141338;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)6117;
unsigned int var_3 = 2482854453U;
signed char var_5 = (signed char)-6;
int var_6 = 2084017202;
unsigned int var_9 = 1418072891U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)3526;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)8952;
int zero = 0;
int var_16 = -2128808733;
signed char var_17 = (signed char)-115;
int var_18 = -267058906;
unsigned char var_19 = (unsigned char)76;
unsigned long long int var_20 = 15318548759006235914ULL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)11191;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
unsigned char var_26 = (unsigned char)59;
unsigned short var_27 = (unsigned short)29642;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 8721622894684553988ULL;
signed char var_30 = (signed char)-81;
int var_31 = -339307529;
unsigned char var_32 = (unsigned char)16;
unsigned short var_33 = (unsigned short)1700;
unsigned short var_34 = (unsigned short)7631;
unsigned int var_35 = 188840531U;
_Bool var_36 = (_Bool)1;
unsigned short var_37 = (unsigned short)53054;
_Bool arr_0 [21] ;
unsigned int arr_2 [21] ;
unsigned int arr_3 [21] ;
unsigned short arr_4 [21] ;
int arr_5 [21] ;
unsigned long long int arr_6 [21] [21] ;
_Bool arr_11 [21] [21] [21] ;
_Bool arr_12 [21] ;
signed char arr_13 [21] [21] [21] ;
unsigned int arr_14 [21] ;
long long int arr_16 [21] [21] ;
unsigned char arr_17 [21] [21] ;
_Bool arr_25 [15] ;
unsigned int arr_8 [21] [21] ;
unsigned int arr_9 [21] ;
unsigned int arr_15 [21] [21] ;
unsigned short arr_20 [18] ;
unsigned int arr_21 [18] ;
int arr_26 [15] ;
_Bool arr_33 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2589107296U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1188263119U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)11710;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = -594839362;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 16705542507268495087ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 3087912824U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = 1319701541686358597LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 686241078U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 2975424851U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_15 [i_0] [i_1] = 552231284U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (unsigned short)15307;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = 1284648968U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? -1950059938 : 2041193611;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_33 [i_0] [i_1] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
