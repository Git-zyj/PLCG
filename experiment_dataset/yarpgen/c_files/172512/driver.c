#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 8778983896930759343ULL;
int var_10 = 371582393;
unsigned char var_11 = (unsigned char)2;
unsigned int var_13 = 2871583055U;
int zero = 0;
unsigned short var_15 = (unsigned short)50937;
long long int var_16 = 5095064417426097573LL;
unsigned long long int var_17 = 15982040709930361666ULL;
int var_18 = -753478341;
unsigned char var_19 = (unsigned char)9;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)17378;
_Bool arr_0 [12] [12] ;
int arr_1 [12] ;
signed char arr_2 [12] [12] ;
unsigned long long int arr_6 [12] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -487679158;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 15836575063121651099ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)38428;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
