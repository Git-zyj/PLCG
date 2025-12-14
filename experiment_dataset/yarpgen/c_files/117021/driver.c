#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)223;
signed char var_4 = (signed char)45;
unsigned char var_8 = (unsigned char)123;
unsigned int var_10 = 3808870214U;
signed char var_12 = (signed char)84;
int zero = 0;
signed char var_14 = (signed char)-116;
int var_15 = 91683019;
unsigned char var_16 = (unsigned char)244;
unsigned long long int var_17 = 7178685733240245723ULL;
unsigned char var_18 = (unsigned char)0;
short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)24953;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
