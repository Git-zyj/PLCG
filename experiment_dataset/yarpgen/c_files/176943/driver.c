#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12651;
unsigned int var_4 = 796697287U;
unsigned short var_8 = (unsigned short)18808;
long long int var_10 = 2318403850446144004LL;
int zero = 0;
unsigned char var_13 = (unsigned char)87;
short var_14 = (short)10721;
short var_15 = (short)-6795;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)84;
unsigned short var_18 = (unsigned short)52155;
short var_19 = (short)325;
signed char arr_0 [15] ;
_Bool arr_1 [15] ;
_Bool arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
