#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
_Bool var_1 = (_Bool)1;
long long int var_3 = 820435851721024052LL;
short var_4 = (short)29950;
unsigned short var_6 = (unsigned short)897;
unsigned long long int var_10 = 12100153983493850321ULL;
unsigned int var_12 = 3369451313U;
unsigned long long int var_14 = 10509885675408715526ULL;
int var_15 = 915936954;
unsigned char var_17 = (unsigned char)240;
int zero = 0;
unsigned long long int var_18 = 7606053948059371595ULL;
unsigned long long int var_19 = 16485111368981049111ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 227312145U;
long long int var_22 = -1591822882734928712LL;
signed char var_23 = (signed char)-59;
unsigned char var_24 = (unsigned char)200;
unsigned short var_25 = (unsigned short)38218;
unsigned int var_26 = 749875390U;
unsigned long long int var_27 = 13464293008833042999ULL;
unsigned short var_28 = (unsigned short)26161;
long long int var_29 = -7335214525043866702LL;
long long int var_30 = 9165427323727960283LL;
unsigned char var_31 = (unsigned char)16;
_Bool var_32 = (_Bool)1;
long long int var_33 = -3294296917418102409LL;
unsigned char arr_0 [25] [25] ;
unsigned short arr_1 [25] [25] ;
_Bool arr_2 [15] ;
unsigned short arr_8 [15] [15] ;
signed char arr_9 [15] ;
short arr_10 [15] [15] [15] ;
unsigned int arr_12 [11] ;
int arr_18 [11] [11] [11] ;
short arr_25 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)39;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)59843;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)35934;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)-107;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-2945 : (short)-26445;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 1563971998U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 1444158436;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (short)-27660;
}

void checksum() {
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
