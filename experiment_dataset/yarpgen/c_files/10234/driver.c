#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)210;
int var_2 = -1954784410;
_Bool var_6 = (_Bool)1;
int var_8 = 263761442;
_Bool var_10 = (_Bool)1;
unsigned char var_13 = (unsigned char)113;
signed char var_16 = (signed char)19;
_Bool var_19 = (_Bool)0;
int zero = 0;
short var_20 = (short)29587;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3521646336U;
int var_23 = -1227492573;
short var_24 = (short)-7320;
unsigned int var_25 = 3123439690U;
unsigned int var_26 = 2430732147U;
long long int var_27 = -4708703388025691718LL;
long long int arr_1 [12] [12] ;
unsigned long long int arr_2 [12] [12] ;
unsigned char arr_9 [24] ;
long long int arr_3 [12] ;
unsigned int arr_12 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = -5715149647149160184LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 3928647609424142635ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -843713050239500432LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 2228507728U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
