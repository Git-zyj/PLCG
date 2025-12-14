#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1834319762;
unsigned char var_1 = (unsigned char)209;
int var_2 = -421668429;
short var_9 = (short)9160;
unsigned char var_11 = (unsigned char)129;
unsigned int var_12 = 3295013933U;
int var_13 = 1657458366;
int zero = 0;
int var_14 = -1768303901;
unsigned int var_15 = 3532784984U;
short var_16 = (short)12462;
unsigned short var_17 = (unsigned short)19901;
short arr_11 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)23667;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
