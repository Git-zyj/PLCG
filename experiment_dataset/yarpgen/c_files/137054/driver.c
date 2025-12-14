#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10657663991848586114ULL;
int var_1 = 715284850;
long long int var_7 = -5753324434530268758LL;
unsigned long long int var_8 = 1268773066961559250ULL;
_Bool var_9 = (_Bool)1;
long long int var_11 = 8835221495337713985LL;
unsigned short var_12 = (unsigned short)8217;
signed char var_14 = (signed char)-73;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 6567094468726260044ULL;
long long int var_18 = -772238686122802726LL;
int zero = 0;
unsigned char var_19 = (unsigned char)254;
unsigned long long int var_20 = 7957046547346403143ULL;
int var_21 = -1237415612;
short var_22 = (short)-15038;
unsigned short var_23 = (unsigned short)11314;
unsigned char arr_3 [16] [16] ;
_Bool arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
