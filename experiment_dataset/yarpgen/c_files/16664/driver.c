#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1309131472;
int var_7 = 485401825;
unsigned long long int var_12 = 8971649209404459075ULL;
short var_13 = (short)-25490;
unsigned char var_14 = (unsigned char)65;
int zero = 0;
unsigned long long int var_16 = 6555402486076714597ULL;
unsigned char var_17 = (unsigned char)45;
unsigned long long int var_18 = 5703357274111838961ULL;
_Bool arr_0 [15] [15] ;
int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 15366858;
}

void checksum() {
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
