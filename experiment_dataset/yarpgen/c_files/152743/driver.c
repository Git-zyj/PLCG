#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 636723968U;
_Bool var_4 = (_Bool)1;
signed char var_8 = (signed char)58;
unsigned int var_10 = 4023459301U;
unsigned long long int var_12 = 14264968363495611108ULL;
int var_14 = 186541172;
unsigned char var_15 = (unsigned char)72;
unsigned short var_16 = (unsigned short)57236;
int zero = 0;
unsigned long long int var_17 = 16869149733701038473ULL;
unsigned char var_18 = (unsigned char)33;
unsigned long long int var_19 = 17242170387919273035ULL;
short var_20 = (short)5313;
unsigned long long int var_21 = 7692476614017700978ULL;
unsigned long long int var_22 = 217608816439122545ULL;
signed char var_23 = (signed char)-99;
unsigned long long int var_24 = 7280815538501423559ULL;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 2776684412276185049ULL;
signed char var_27 = (signed char)-68;
unsigned int arr_4 [23] ;
unsigned int arr_7 [23] [23] [23] ;
int arr_8 [23] ;
signed char arr_11 [16] ;
int arr_10 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 2262629379U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 3207472494U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -1796435627;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)126;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = -1923970284;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
