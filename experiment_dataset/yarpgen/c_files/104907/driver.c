#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 3409984037U;
_Bool var_9 = (_Bool)0;
int var_11 = -80419433;
long long int var_14 = 6880062624163996060LL;
int zero = 0;
signed char var_17 = (signed char)-51;
unsigned int var_18 = 3549872712U;
unsigned char var_19 = (unsigned char)45;
unsigned long long int var_20 = 4000892888237540173ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 4248051825U;
unsigned int var_23 = 183029733U;
_Bool var_24 = (_Bool)1;
unsigned short arr_4 [20] [20] ;
signed char arr_5 [20] [20] ;
unsigned long long int arr_6 [23] ;
int arr_8 [23] ;
unsigned char arr_11 [21] ;
unsigned long long int arr_12 [21] ;
unsigned int arr_13 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)62735;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 79950768914460173ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 1080861020;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 6920400305512571402ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 2863795765U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
