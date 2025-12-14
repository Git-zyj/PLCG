#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2300180666U;
unsigned long long int var_4 = 4063566249253166679ULL;
unsigned int var_6 = 3191413833U;
short var_7 = (short)28153;
unsigned long long int var_9 = 3627709754502999627ULL;
unsigned int var_12 = 222879875U;
unsigned char var_14 = (unsigned char)96;
unsigned int var_15 = 2535644144U;
int zero = 0;
signed char var_16 = (signed char)35;
unsigned char var_17 = (unsigned char)58;
unsigned char var_18 = (unsigned char)190;
signed char var_19 = (signed char)119;
unsigned int var_20 = 896541970U;
signed char var_21 = (signed char)97;
int var_22 = 236939536;
signed char arr_4 [23] [23] [23] ;
int arr_6 [23] [23] [23] ;
unsigned char arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 1672591098;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)41;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
