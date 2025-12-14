#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 404348953;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)19;
unsigned int var_5 = 2970761814U;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-99;
unsigned int var_9 = 1752718865U;
unsigned int var_10 = 2207948992U;
unsigned int var_11 = 2181561681U;
unsigned int var_12 = 885947000U;
signed char var_13 = (signed char)-14;
unsigned int var_14 = 2158995361U;
unsigned char var_15 = (unsigned char)189;
int var_17 = 1767015433;
signed char var_18 = (signed char)-20;
unsigned short var_19 = (unsigned short)11297;
int zero = 0;
unsigned char var_20 = (unsigned char)173;
unsigned char var_21 = (unsigned char)255;
int var_22 = -2039801085;
int var_23 = -1115584802;
int var_24 = -1380401286;
unsigned char var_25 = (unsigned char)167;
short var_26 = (short)11097;
unsigned long long int arr_0 [19] ;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned char arr_3 [19] [19] [19] ;
signed char arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 16190694030614076227ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)65307;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)62457;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-30;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
