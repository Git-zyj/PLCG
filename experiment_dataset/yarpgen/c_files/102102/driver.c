#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)416;
unsigned char var_1 = (unsigned char)131;
long long int var_2 = 4479173879246884161LL;
short var_3 = (short)-14421;
_Bool var_4 = (_Bool)0;
short var_5 = (short)11595;
unsigned char var_8 = (unsigned char)153;
int var_9 = 1278197859;
int var_10 = 1352804242;
unsigned short var_12 = (unsigned short)35931;
int zero = 0;
long long int var_13 = -7559912411986334948LL;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-11238;
unsigned char var_16 = (unsigned char)174;
signed char var_17 = (signed char)49;
unsigned char var_18 = (unsigned char)134;
short var_19 = (short)12766;
unsigned int var_20 = 3879905045U;
short var_21 = (short)7651;
int var_22 = 535609890;
int var_23 = -1896343339;
int arr_0 [24] ;
unsigned short arr_1 [24] ;
_Bool arr_3 [24] [24] [24] ;
unsigned char arr_4 [24] [24] [24] ;
short arr_6 [24] [24] [24] ;
signed char arr_8 [14] ;
long long int arr_9 [14] ;
unsigned char arr_13 [23] ;
unsigned char arr_7 [24] ;
unsigned char arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 866844035;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)49332;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)156 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-22984 : (short)11161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-42 : (signed char)127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = -9167578768802576069LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (unsigned char)29;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
