#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2488;
long long int var_2 = 6456145435033667037LL;
signed char var_3 = (signed char)-90;
long long int var_4 = -4569768939263443282LL;
signed char var_6 = (signed char)1;
unsigned int var_7 = 2068967093U;
int var_10 = -1852207316;
unsigned long long int var_11 = 5342829135032180331ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17036420326773922292ULL;
unsigned int var_15 = 1479881822U;
unsigned char var_16 = (unsigned char)147;
int zero = 0;
unsigned short var_17 = (unsigned short)35646;
long long int var_18 = 7009390358425577427LL;
short var_19 = (short)-14788;
unsigned short var_20 = (unsigned short)62138;
unsigned short var_21 = (unsigned short)17954;
unsigned int arr_0 [12] ;
signed char arr_1 [12] ;
unsigned int arr_3 [12] [12] ;
unsigned long long int arr_4 [12] ;
short arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 4019196088U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 3635783662U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 5145329685686050202ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (short)6420;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
