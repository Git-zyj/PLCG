#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3046408173U;
unsigned char var_5 = (unsigned char)199;
unsigned char var_6 = (unsigned char)79;
unsigned long long int var_8 = 13291595751022569179ULL;
long long int var_10 = 6798367099699557176LL;
unsigned char var_12 = (unsigned char)38;
int zero = 0;
short var_15 = (short)-418;
unsigned int var_16 = 1087387414U;
_Bool var_17 = (_Bool)0;
unsigned long long int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 9487106183129371712ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
