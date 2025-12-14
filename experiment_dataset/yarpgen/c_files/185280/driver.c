#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20589;
unsigned long long int var_3 = 2572141479696493546ULL;
unsigned long long int var_4 = 27526734657374002ULL;
signed char var_10 = (signed char)70;
short var_12 = (short)1278;
signed char var_16 = (signed char)70;
short var_17 = (short)-23050;
int zero = 0;
unsigned int var_20 = 3650093723U;
unsigned int var_21 = 3530086234U;
unsigned short var_22 = (unsigned short)58116;
int var_23 = 1878153892;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)10;
unsigned int var_26 = 2176681571U;
unsigned int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4284864876U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-32746;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)644;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
