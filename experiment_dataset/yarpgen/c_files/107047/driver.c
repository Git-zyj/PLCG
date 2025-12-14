#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1712619702614798805ULL;
unsigned long long int var_1 = 15227627050688583182ULL;
short var_2 = (short)-1770;
unsigned int var_3 = 2243369614U;
unsigned short var_4 = (unsigned short)16510;
signed char var_5 = (signed char)3;
long long int var_7 = 1639426999823831408LL;
long long int var_8 = 8952322194766435429LL;
unsigned long long int var_9 = 6480300527302072437ULL;
long long int var_10 = 546381787598676041LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)2239;
unsigned short var_13 = (unsigned short)32294;
unsigned char var_14 = (unsigned char)177;
long long int var_15 = -6418245062447234593LL;
unsigned long long int var_16 = 5805399018387062423ULL;
short var_17 = (short)765;
int zero = 0;
signed char var_18 = (signed char)121;
long long int var_19 = -4237101170863861234LL;
unsigned short var_20 = (unsigned short)9871;
signed char var_21 = (signed char)-107;
int arr_0 [13] ;
int arr_1 [13] [13] ;
unsigned short arr_4 [22] [22] ;
unsigned int arr_5 [22] ;
_Bool arr_9 [24] ;
unsigned short arr_10 [24] ;
signed char arr_2 [13] [13] ;
long long int arr_3 [13] ;
unsigned short arr_6 [22] ;
int arr_7 [22] ;
_Bool arr_8 [22] ;
_Bool arr_11 [24] ;
unsigned char arr_12 [24] ;
unsigned short arr_13 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 754430077;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -1155453171;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)48207;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3766855828U : 739997916U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned short)13015;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-110 : (signed char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4035517210145531491LL : -5667458090208766384LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)16905 : (unsigned short)8613;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -746256622 : 1451273532;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (unsigned short)45280;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
