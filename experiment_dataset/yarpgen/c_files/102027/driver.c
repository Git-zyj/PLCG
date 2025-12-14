#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1226309907U;
unsigned int var_6 = 1121426912U;
unsigned long long int var_9 = 10285764221823440410ULL;
unsigned int var_17 = 3959615047U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4110549851U;
short var_21 = (short)13102;
unsigned char arr_5 [14] [14] ;
signed char arr_6 [14] ;
unsigned int arr_3 [20] ;
_Bool arr_4 [20] ;
int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 1684753891U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = -1058711920;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
