#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1545856612;
_Bool var_8 = (_Bool)1;
long long int var_11 = 4484375075708403697LL;
unsigned char var_13 = (unsigned char)4;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2837098283U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)29372;
_Bool arr_0 [13] ;
short arr_1 [13] ;
unsigned short arr_2 [13] ;
short arr_3 [13] [13] ;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-7802;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned short)57780;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-23713 : (short)15944;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)6793 : (short)11041;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
