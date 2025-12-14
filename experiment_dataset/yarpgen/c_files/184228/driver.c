#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-4463;
int var_6 = -354020711;
unsigned long long int var_8 = 8465445051043899662ULL;
signed char var_12 = (signed char)57;
int zero = 0;
unsigned short var_15 = (unsigned short)55670;
unsigned long long int var_16 = 803523469308378341ULL;
unsigned short var_17 = (unsigned short)33578;
short var_18 = (short)-23998;
unsigned long long int arr_0 [11] ;
short arr_1 [11] ;
int arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1622786846451409799ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (short)-13196;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 1515477887 : -568916522;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
