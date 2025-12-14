#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26114;
unsigned short var_1 = (unsigned short)29471;
int var_3 = 104124605;
int var_6 = -115080711;
long long int var_10 = 4102713549824264212LL;
signed char var_11 = (signed char)-28;
long long int var_13 = 6931770913056873072LL;
int zero = 0;
short var_14 = (short)-18263;
unsigned short var_15 = (unsigned short)40022;
short var_16 = (short)-29577;
unsigned char var_17 = (unsigned char)108;
unsigned int arr_0 [21] ;
long long int arr_9 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 301140319U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 1468324665165531025LL : 7509097997296849255LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
