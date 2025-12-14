#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 108015060U;
unsigned short var_2 = (unsigned short)35761;
unsigned int var_7 = 2467737369U;
short var_8 = (short)-9925;
unsigned short var_10 = (unsigned short)7694;
unsigned char var_13 = (unsigned char)184;
unsigned char var_17 = (unsigned char)227;
int zero = 0;
unsigned char var_20 = (unsigned char)201;
unsigned int var_21 = 4041885713U;
unsigned char var_22 = (unsigned char)235;
long long int var_23 = 6357189212580519754LL;
signed char var_24 = (signed char)104;
unsigned char arr_3 [11] [11] ;
long long int arr_4 [11] [11] ;
short arr_6 [11] ;
unsigned int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1132550805500872358LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)-5572;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 1604949783U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
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
