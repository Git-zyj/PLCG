#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4131607835540064806ULL;
unsigned int var_2 = 2892703083U;
unsigned char var_3 = (unsigned char)202;
unsigned int var_4 = 1582700071U;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 209571767U;
int var_7 = 1782258566;
unsigned char var_10 = (unsigned char)188;
unsigned char var_11 = (unsigned char)94;
unsigned short var_12 = (unsigned short)25413;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)38837;
unsigned short var_16 = (unsigned short)44608;
unsigned int var_18 = 1811810735U;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)16;
unsigned short var_22 = (unsigned short)62360;
unsigned int var_23 = 430466987U;
unsigned char var_24 = (unsigned char)19;
unsigned short var_25 = (unsigned short)50926;
int arr_1 [23] ;
unsigned short arr_3 [23] ;
int arr_7 [23] [23] ;
int arr_8 [23] [23] ;
_Bool arr_12 [20] ;
int arr_13 [20] ;
long long int arr_4 [23] ;
long long int arr_5 [23] ;
unsigned long long int arr_10 [23] ;
unsigned short arr_11 [23] ;
short arr_14 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -784129174;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)16960;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -1145091638;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = -817813019;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = -964801503;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -3649254975298294411LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = -8826499116571005142LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 12138259381336599008ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)58126;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (short)18620;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
