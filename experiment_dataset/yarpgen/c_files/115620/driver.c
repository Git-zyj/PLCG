#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2249414376185468896LL;
unsigned char var_2 = (unsigned char)255;
unsigned long long int var_3 = 9460509130053923917ULL;
unsigned short var_14 = (unsigned short)4060;
signed char var_15 = (signed char)73;
unsigned long long int var_17 = 11458673653125593699ULL;
int zero = 0;
unsigned int var_18 = 1079093760U;
unsigned char var_19 = (unsigned char)123;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)188;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
