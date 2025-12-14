#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
long long int var_5 = 1926880996435001056LL;
short var_8 = (short)-21108;
short var_10 = (short)2412;
int var_11 = 1011378750;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1439596087U;
unsigned char var_19 = (unsigned char)160;
long long int arr_1 [20] ;
unsigned short arr_3 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 8091855816915800034LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)53106 : (unsigned short)33068;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
