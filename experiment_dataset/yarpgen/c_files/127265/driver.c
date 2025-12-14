#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2314251872U;
unsigned int var_2 = 2838468708U;
long long int var_5 = 7215555314360087609LL;
unsigned short var_8 = (unsigned short)58771;
int zero = 0;
short var_13 = (short)-316;
long long int var_14 = 5310922147028962413LL;
long long int var_15 = 8034084781634445807LL;
int var_16 = 1744728016;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)6;
unsigned int arr_2 [15] ;
long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1900520558U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 6258932310109932231LL;
}

void checksum() {
    hash(&seed, var_13);
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
