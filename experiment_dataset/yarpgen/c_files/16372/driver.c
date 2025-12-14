#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63664;
short var_2 = (short)28502;
short var_3 = (short)17382;
unsigned long long int var_4 = 5723680102851713626ULL;
int var_5 = -1194730284;
short var_6 = (short)-7416;
short var_7 = (short)-1965;
unsigned char var_8 = (unsigned char)57;
int zero = 0;
short var_10 = (short)-22101;
unsigned char var_11 = (unsigned char)63;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2231521232U;
unsigned long long int var_14 = 5125407855392069676ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
_Bool arr_2 [13] ;
unsigned char arr_3 [13] ;
unsigned char arr_4 [13] [13] ;
signed char arr_7 [13] ;
int arr_8 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = -1213834185;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
