#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)43356;
short var_4 = (short)6977;
short var_5 = (short)2109;
int var_6 = 520284575;
unsigned long long int var_9 = 14399482280759179788ULL;
unsigned int var_11 = 2044623643U;
int var_12 = -1488967748;
unsigned char var_14 = (unsigned char)75;
unsigned short var_15 = (unsigned short)52584;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)47947;
short var_21 = (short)3425;
signed char var_22 = (signed char)31;
short var_23 = (short)21486;
unsigned short var_24 = (unsigned short)11855;
unsigned long long int var_25 = 14573919049150491149ULL;
unsigned char var_26 = (unsigned char)91;
unsigned long long int var_27 = 13898293178030969185ULL;
unsigned short var_28 = (unsigned short)51708;
unsigned char var_29 = (unsigned char)148;
int var_30 = -152697791;
_Bool arr_0 [22] [22] ;
int arr_1 [22] ;
long long int arr_2 [22] ;
int arr_3 [23] ;
unsigned long long int arr_4 [23] [23] ;
_Bool arr_5 [23] ;
signed char arr_13 [14] ;
unsigned short arr_19 [14] [14] ;
int arr_6 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 580876427;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3655027868973520662LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -99491189;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 5155512960350682851ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)64664;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 1006029697;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
