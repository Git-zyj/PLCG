#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4235937196U;
unsigned long long int var_7 = 6416617819446905807ULL;
unsigned long long int var_8 = 223216283244371466ULL;
signed char var_9 = (signed char)37;
signed char var_10 = (signed char)-52;
int zero = 0;
unsigned int var_15 = 2478883768U;
_Bool var_16 = (_Bool)1;
int var_17 = -900034687;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)164;
unsigned long long int var_20 = 13795653320530443990ULL;
short var_21 = (short)-17562;
signed char var_22 = (signed char)18;
unsigned char arr_0 [13] ;
unsigned int arr_1 [13] ;
_Bool arr_4 [24] [24] ;
short arr_5 [24] [24] ;
signed char arr_10 [23] ;
unsigned long long int arr_2 [13] ;
unsigned short arr_3 [13] ;
_Bool arr_6 [24] ;
unsigned long long int arr_7 [24] [24] ;
long long int arr_12 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2125897489U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-26094;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)-107;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1585891777650766935ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)3951;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 2081381654215023065ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 365191975844712175LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
