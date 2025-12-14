#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53944;
long long int var_3 = -5893712606219508235LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)22502;
unsigned short var_6 = (unsigned short)20198;
unsigned short var_10 = (unsigned short)34884;
long long int var_11 = -2274401102370076836LL;
unsigned short var_16 = (unsigned short)10099;
int zero = 0;
signed char var_18 = (signed char)95;
unsigned short var_19 = (unsigned short)35622;
signed char var_20 = (signed char)22;
unsigned int var_21 = 3399402097U;
signed char var_22 = (signed char)92;
signed char var_23 = (signed char)-17;
unsigned short arr_3 [24] ;
int arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)24566;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1893712537;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
