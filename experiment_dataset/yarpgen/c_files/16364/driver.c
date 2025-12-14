#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2115;
short var_1 = (short)-28413;
_Bool var_7 = (_Bool)0;
unsigned int var_15 = 269662332U;
short var_16 = (short)10160;
long long int var_17 = 6160070933202574362LL;
int zero = 0;
unsigned int var_20 = 2126598771U;
unsigned short var_21 = (unsigned short)40243;
unsigned char var_22 = (unsigned char)135;
unsigned int var_23 = 169992191U;
unsigned int var_24 = 1966019462U;
short var_25 = (short)-6323;
unsigned long long int arr_0 [23] ;
unsigned int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 14026396391903638307ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 4128306496U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
