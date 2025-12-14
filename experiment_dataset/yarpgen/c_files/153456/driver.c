#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22654;
int var_2 = -2021515239;
short var_3 = (short)6228;
unsigned short var_4 = (unsigned short)44891;
signed char var_9 = (signed char)45;
unsigned int var_10 = 1722414309U;
unsigned long long int var_11 = 12835953042120808422ULL;
int zero = 0;
int var_13 = 1408908500;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)185;
short var_18 = (short)-10514;
unsigned short arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
_Bool arr_2 [23] ;
unsigned char arr_5 [23] [23] [23] ;
unsigned short arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)36783;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 11769708941513570146ULL : 4457203532271656221ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)179 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54518 : (unsigned short)1754;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
