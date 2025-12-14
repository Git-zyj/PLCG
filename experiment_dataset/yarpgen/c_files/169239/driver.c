#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned short var_2 = (unsigned short)22436;
unsigned char var_3 = (unsigned char)189;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 2271820317U;
unsigned short var_6 = (unsigned short)28346;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-121;
unsigned short var_11 = (unsigned short)62052;
unsigned int var_12 = 3656546035U;
signed char var_13 = (signed char)5;
unsigned int var_15 = 4052022746U;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_17 = -2797613361805775155LL;
unsigned long long int var_18 = 17349724969971556526ULL;
unsigned short var_19 = (unsigned short)62466;
int var_20 = 1227893592;
signed char var_21 = (signed char)106;
unsigned long long int arr_0 [11] [11] ;
unsigned int arr_1 [11] [11] ;
_Bool arr_2 [11] [11] ;
unsigned char arr_3 [11] ;
unsigned short arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 2957648258644119105ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3783301995U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)8849;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
