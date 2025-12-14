#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)86;
unsigned int var_4 = 2516522619U;
unsigned char var_6 = (unsigned char)62;
unsigned long long int var_7 = 9987012727320037122ULL;
int var_8 = -1523065701;
signed char var_9 = (signed char)33;
signed char var_12 = (signed char)-105;
int zero = 0;
short var_13 = (short)-18934;
unsigned int var_14 = 257137362U;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-99;
_Bool arr_0 [24] [24] ;
int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 2118077048;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
