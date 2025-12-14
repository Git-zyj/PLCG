#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)98;
unsigned short var_4 = (unsigned short)32940;
unsigned char var_8 = (unsigned char)215;
signed char var_10 = (signed char)123;
short var_13 = (short)-26910;
unsigned long long int var_14 = 14509572773787463979ULL;
int zero = 0;
unsigned int var_15 = 2041105848U;
unsigned int var_16 = 3299564088U;
unsigned int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2381258569U : 3781650790U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
