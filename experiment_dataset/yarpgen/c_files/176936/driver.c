#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8044;
int var_4 = 409632037;
short var_5 = (short)925;
unsigned long long int var_6 = 14780819498157731477ULL;
unsigned int var_8 = 2681292834U;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1637511368U;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)31932;
short var_18 = (short)19622;
int var_19 = 340650250;
short var_20 = (short)-31223;
signed char var_21 = (signed char)21;
unsigned int var_22 = 1426687673U;
unsigned int var_23 = 1448244866U;
short var_24 = (short)-11646;
_Bool arr_0 [21] ;
_Bool arr_1 [21] ;
long long int arr_9 [25] [25] ;
unsigned long long int arr_2 [21] [21] ;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = -3653702744034672941LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 11115294757130756303ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)4863;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
