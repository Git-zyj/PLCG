#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)27857;
unsigned char var_11 = (unsigned char)105;
unsigned char var_12 = (unsigned char)75;
short var_14 = (short)-23764;
int zero = 0;
unsigned short var_15 = (unsigned short)53599;
unsigned char var_16 = (unsigned char)139;
short var_17 = (short)-24152;
short var_18 = (short)-28655;
short var_19 = (short)-7067;
unsigned short var_20 = (unsigned short)48512;
short arr_0 [20] [20] ;
unsigned short arr_1 [20] ;
unsigned short arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-30606;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)2838;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)29023;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
