#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2455384306U;
int var_6 = 2079189715;
unsigned long long int var_7 = 17022209373198216900ULL;
signed char var_12 = (signed char)-34;
unsigned long long int var_13 = 6190846039147072763ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 2636024878614033973ULL;
int zero = 0;
long long int var_20 = -579228621595288202LL;
unsigned int var_21 = 909355470U;
unsigned long long int var_22 = 13703870096011487265ULL;
unsigned int var_23 = 3018401594U;
unsigned char var_24 = (unsigned char)187;
long long int arr_2 [16] ;
short arr_3 [16] ;
short arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -4575088274592843569LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)9396;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)21780 : (short)-25757;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
