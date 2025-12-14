#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1917291899;
unsigned long long int var_3 = 17813371442384021677ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_12 = (unsigned short)21024;
unsigned long long int var_15 = 626328264058748306ULL;
unsigned long long int var_16 = 13727430285166905967ULL;
unsigned char var_17 = (unsigned char)152;
unsigned int var_18 = 2865162333U;
int zero = 0;
unsigned int var_20 = 450063404U;
unsigned short var_21 = (unsigned short)15705;
unsigned int var_22 = 2824464207U;
unsigned int arr_0 [11] [11] ;
unsigned char arr_1 [11] [11] ;
_Bool arr_4 [11] ;
short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 976373451U : 2260558773U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)-17335 : (short)-19319;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
