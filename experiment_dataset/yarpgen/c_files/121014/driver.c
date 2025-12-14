#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned char var_2 = (unsigned char)97;
int var_3 = -501436672;
unsigned short var_5 = (unsigned short)7984;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)51002;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 15901498588361117958ULL;
unsigned char var_19 = (unsigned char)224;
short var_20 = (short)4733;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)180;
signed char var_23 = (signed char)-11;
signed char var_24 = (signed char)39;
unsigned long long int var_25 = 16294942377726930319ULL;
_Bool var_26 = (_Bool)1;
unsigned short var_27 = (unsigned short)46604;
unsigned short var_28 = (unsigned short)4327;
unsigned long long int var_29 = 1514475317183717865ULL;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)33136;
unsigned long long int arr_0 [15] ;
unsigned long long int arr_1 [15] ;
_Bool arr_2 [15] ;
unsigned char arr_3 [15] ;
unsigned long long int arr_5 [14] ;
long long int arr_6 [14] ;
short arr_8 [14] [14] ;
signed char arr_10 [14] [14] [14] ;
short arr_4 [15] ;
signed char arr_11 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 872424427783670376ULL : 12572458733102896312ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 16481659611711584034ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)42 : (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 5724627438528752022ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -62987709858290693LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = (short)10227;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-21048 : (short)-27383;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (signed char)11;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
