#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1272721434;
unsigned short var_5 = (unsigned short)42604;
int var_6 = 1701977388;
short var_7 = (short)4693;
short var_9 = (short)14851;
long long int var_10 = 6571023086054724332LL;
long long int var_11 = -868171102006052761LL;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)3;
int zero = 0;
unsigned char var_14 = (unsigned char)73;
unsigned int var_15 = 3747813408U;
unsigned int var_16 = 2706100654U;
unsigned int var_17 = 1487566221U;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)218;
unsigned short var_20 = (unsigned short)9055;
unsigned short arr_0 [10] ;
short arr_1 [10] ;
short arr_3 [10] ;
_Bool arr_4 [10] [10] ;
signed char arr_7 [10] [10] ;
_Bool arr_8 [10] [10] ;
int arr_11 [12] ;
_Bool arr_12 [12] [12] ;
short arr_10 [10] [10] ;
unsigned short arr_15 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)14053;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-9356;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-4594;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = 630034853;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = (short)-24039;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)23612 : (unsigned short)25830;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
