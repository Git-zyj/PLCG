#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1553768144;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1488988952U;
unsigned char var_10 = (unsigned char)247;
_Bool var_12 = (_Bool)0;
short var_14 = (short)3777;
int zero = 0;
int var_15 = -77521840;
int var_16 = 2063712951;
long long int var_17 = 3023672248421525532LL;
signed char arr_2 [14] ;
_Bool arr_9 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
