#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11810;
unsigned char var_1 = (unsigned char)189;
short var_2 = (short)-16631;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 5027048860997442167ULL;
int var_6 = -1074137131;
unsigned int var_7 = 3550159692U;
unsigned int var_8 = 2429763069U;
unsigned long long int var_9 = 5210012297514671258ULL;
unsigned int var_11 = 747300065U;
unsigned char var_13 = (unsigned char)120;
int zero = 0;
unsigned char var_14 = (unsigned char)82;
unsigned int var_15 = 2376043506U;
short var_16 = (short)8782;
unsigned long long int arr_0 [25] [25] ;
_Bool arr_2 [25] [25] ;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 12945896494482905456ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-5002;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
