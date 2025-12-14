#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4225869414586999415ULL;
signed char var_1 = (signed char)88;
short var_2 = (short)-16992;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)6;
int var_5 = -579172771;
short var_6 = (short)26586;
signed char var_9 = (signed char)26;
signed char var_12 = (signed char)-126;
short var_13 = (short)7505;
signed char var_14 = (signed char)22;
int zero = 0;
unsigned int var_15 = 3764847376U;
short var_16 = (short)-11399;
signed char var_17 = (signed char)69;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
short arr_3 [11] ;
signed char arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-14077;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)29;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
