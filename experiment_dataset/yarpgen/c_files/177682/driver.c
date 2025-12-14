#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1727968232;
unsigned char var_7 = (unsigned char)165;
unsigned int var_9 = 3192460472U;
unsigned char var_10 = (unsigned char)201;
int var_12 = 793025082;
short var_13 = (short)-10347;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 345499526U;
unsigned int var_16 = 1739587440U;
short var_17 = (short)29401;
unsigned short var_18 = (unsigned short)38109;
int zero = 0;
int var_20 = 135417526;
signed char var_21 = (signed char)7;
unsigned short var_22 = (unsigned short)29014;
short var_23 = (short)20067;
unsigned char var_24 = (unsigned char)130;
short var_25 = (short)919;
unsigned int var_26 = 4132690039U;
short var_27 = (short)-26675;
unsigned char var_28 = (unsigned char)26;
unsigned long long int var_29 = 18047102863545699898ULL;
signed char arr_0 [22] ;
signed char arr_1 [22] ;
unsigned int arr_4 [22] ;
unsigned char arr_6 [22] [22] [22] [22] ;
long long int arr_12 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3509281666U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = -7002534530165856160LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
