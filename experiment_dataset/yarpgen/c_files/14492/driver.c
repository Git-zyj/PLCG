#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -604118012;
unsigned char var_3 = (unsigned char)42;
short var_11 = (short)-16559;
int zero = 0;
unsigned char var_14 = (unsigned char)232;
long long int var_15 = 2360441909700644627LL;
unsigned int var_16 = 4064866850U;
unsigned int var_17 = 1372681709U;
signed char var_18 = (signed char)-69;
int arr_0 [23] [23] ;
long long int arr_2 [23] [23] ;
long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 29268253;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 7121285864706038682LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -3556697573860218064LL;
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
