#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
short var_3 = (short)-31669;
long long int var_5 = -234100811615937722LL;
signed char var_6 = (signed char)96;
short var_7 = (short)489;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 17534531224269826345ULL;
int zero = 0;
unsigned int var_11 = 2398684974U;
int var_12 = -907823540;
int var_13 = -1074136171;
_Bool var_14 = (_Bool)1;
short arr_1 [10] [10] ;
unsigned int arr_2 [10] ;
unsigned short arr_3 [10] [10] ;
long long int arr_5 [14] ;
short arr_6 [14] ;
unsigned int arr_10 [14] [14] ;
unsigned short arr_11 [14] [14] [14] ;
unsigned char arr_12 [14] [14] [14] ;
unsigned short arr_14 [22] ;
short arr_15 [22] [22] ;
long long int arr_16 [22] [22] ;
unsigned short arr_17 [22] ;
unsigned char arr_4 [10] ;
unsigned short arr_13 [14] [14] [14] [14] ;
unsigned char arr_18 [22] ;
unsigned long long int arr_19 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)16679;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 646843751U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)56998;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1056544826699669843LL : -7507692534140059161LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (short)3421;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = 2607140457U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)19077;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (unsigned short)8662;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-5364;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = 2878858096823255182LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned short)59090;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)197;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)15084 : (unsigned short)46735;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = 1188250249508609908ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
