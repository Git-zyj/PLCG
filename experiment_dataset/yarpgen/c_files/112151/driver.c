#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)224;
unsigned char var_5 = (unsigned char)213;
int var_7 = -1063771694;
int var_8 = 123623480;
unsigned char var_12 = (unsigned char)155;
int zero = 0;
unsigned char var_17 = (unsigned char)198;
int var_18 = 867067056;
unsigned long long int var_19 = 178918303244161745ULL;
unsigned char var_20 = (unsigned char)220;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 206484731889571117ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
