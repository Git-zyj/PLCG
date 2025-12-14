#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 820416761U;
unsigned long long int var_2 = 10392885698235470398ULL;
long long int var_4 = 2677266311366014894LL;
short var_14 = (short)-8147;
unsigned char var_15 = (unsigned char)207;
short var_16 = (short)14307;
short var_17 = (short)14077;
int zero = 0;
long long int var_20 = -3078295573046166137LL;
long long int var_21 = -2950142791547634353LL;
unsigned int var_22 = 1818456265U;
short arr_4 [11] [11] [11] ;
unsigned int arr_5 [11] ;
short arr_7 [11] [11] ;
short arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-14720;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 3475390349U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-16695 : (short)-3883;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (short)13740;
}

void checksum() {
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
