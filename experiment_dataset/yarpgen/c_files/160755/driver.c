#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4277614264725465065LL;
short var_3 = (short)4352;
int var_4 = -376400057;
int var_5 = -39402341;
int var_7 = -1408668200;
int var_9 = -1071427580;
signed char var_13 = (signed char)29;
unsigned char var_16 = (unsigned char)231;
int zero = 0;
unsigned char var_18 = (unsigned char)163;
long long int var_19 = -4333602361174129162LL;
int var_20 = -742444222;
int var_21 = 621054677;
long long int var_22 = 5052319626100986564LL;
short var_23 = (short)24535;
short var_24 = (short)22401;
int arr_4 [21] ;
short arr_7 [20] ;
signed char arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 563261069;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)-29499;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (signed char)64;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
