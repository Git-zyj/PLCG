#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-18144;
int var_5 = 897735057;
unsigned long long int var_8 = 15290081027315160698ULL;
_Bool var_15 = (_Bool)1;
int var_17 = -21049382;
int var_18 = 1827120638;
int zero = 0;
unsigned int var_20 = 3060910379U;
unsigned char var_21 = (unsigned char)92;
short var_22 = (short)-26782;
signed char var_23 = (signed char)33;
long long int var_24 = -3691430461619457409LL;
short var_25 = (short)18792;
_Bool var_26 = (_Bool)1;
short arr_2 [18] [18] ;
int arr_3 [18] [18] [18] ;
unsigned char arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (short)19635;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1777246908;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)72;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
