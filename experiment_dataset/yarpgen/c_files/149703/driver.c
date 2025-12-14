#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45308;
unsigned short var_4 = (unsigned short)12755;
unsigned long long int var_6 = 5631703342796422042ULL;
int var_11 = 1565623080;
int zero = 0;
unsigned char var_15 = (unsigned char)182;
signed char var_16 = (signed char)-15;
short var_17 = (short)-22396;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 11613342746697618002ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
