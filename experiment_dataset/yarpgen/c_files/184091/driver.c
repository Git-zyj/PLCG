#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3046;
unsigned long long int var_5 = 10040368156447263698ULL;
signed char var_11 = (signed char)-118;
int zero = 0;
unsigned char var_12 = (unsigned char)184;
unsigned short var_13 = (unsigned short)44632;
unsigned long long int var_14 = 9989008991064414839ULL;
short var_15 = (short)5297;
int var_16 = 372088302;
unsigned short var_17 = (unsigned short)49378;
unsigned char arr_2 [10] ;
short arr_3 [10] [10] ;
unsigned int arr_4 [10] ;
_Bool arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (short)12212;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 2694214462U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
