#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12898824688725795720ULL;
unsigned int var_2 = 1883922553U;
signed char var_3 = (signed char)-50;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3256763149U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-79;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3331275500U;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-81;
signed char var_15 = (signed char)36;
unsigned char var_16 = (unsigned char)23;
signed char var_17 = (signed char)-55;
signed char var_18 = (signed char)42;
signed char var_19 = (signed char)2;
unsigned int var_20 = 3529838923U;
short var_21 = (short)19930;
unsigned long long int var_22 = 17103995223305640258ULL;
unsigned char var_23 = (unsigned char)88;
short var_24 = (short)-8132;
_Bool arr_0 [24] ;
int arr_1 [24] ;
signed char arr_2 [24] [24] ;
signed char arr_6 [18] [18] ;
unsigned long long int arr_7 [18] ;
unsigned long long int arr_8 [18] ;
unsigned int arr_9 [18] ;
unsigned int arr_10 [12] [12] ;
signed char arr_11 [12] ;
unsigned char arr_13 [12] [12] ;
signed char arr_14 [12] [12] [12] ;
_Bool arr_3 [24] [24] ;
_Bool arr_4 [24] [24] ;
unsigned int arr_5 [24] ;
unsigned char arr_17 [12] [12] ;
signed char arr_18 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1873646645;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)65 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 4105187565920728415ULL : 5684989703507698799ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 9533708935271803619ULL : 4709485485227657881ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = 833933783U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = 2442574271U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)-106;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1820681120U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)185 : (unsigned char)130;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = (signed char)-15;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
