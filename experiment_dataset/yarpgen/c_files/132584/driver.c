#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 2785026680513012007LL;
unsigned char var_9 = (unsigned char)238;
unsigned long long int var_10 = 9432169344744048321ULL;
short var_11 = (short)9651;
int zero = 0;
short var_14 = (short)15176;
unsigned short var_15 = (unsigned short)38176;
int var_16 = -2041920475;
unsigned char var_17 = (unsigned char)42;
unsigned char arr_0 [15] ;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3792119427298593909ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
