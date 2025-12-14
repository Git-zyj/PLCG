#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 1622648690;
short var_9 = (short)-14877;
_Bool var_11 = (_Bool)1;
long long int var_13 = -1068264519147303987LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = -1214017349;
unsigned char var_18 = (unsigned char)96;
unsigned long long int var_19 = 3591315278772158739ULL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)108;
unsigned char var_23 = (unsigned char)27;
_Bool var_24 = (_Bool)1;
int var_25 = 1997068309;
unsigned int var_26 = 864761580U;
int var_27 = -1227970126;
unsigned short var_28 = (unsigned short)64648;
unsigned int var_29 = 2207340316U;
signed char var_30 = (signed char)91;
unsigned char var_31 = (unsigned char)149;
signed char var_32 = (signed char)21;
unsigned long long int var_33 = 7492006511599109372ULL;
_Bool var_34 = (_Bool)1;
unsigned char arr_1 [11] ;
_Bool arr_4 [11] ;
unsigned char arr_8 [11] [11] ;
unsigned short arr_13 [24] ;
short arr_14 [24] ;
long long int arr_15 [24] ;
unsigned short arr_16 [23] ;
int arr_17 [23] ;
unsigned long long int arr_18 [23] [23] ;
short arr_19 [23] [23] ;
int arr_20 [23] ;
signed char arr_21 [23] ;
short arr_6 [11] ;
int arr_23 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)34743 : (unsigned short)32;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_14 [i_0] = (short)-1778;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3992947097694848998LL : 1909506470813378325LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26609 : (unsigned short)39060;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 2036738409 : 955354895;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? 16954834611549081598ULL : 16846380296336261045ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_19 [i_0] [i_1] = (short)901;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_20 [i_0] = 1953760461;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_21 [i_0] = (signed char)-86;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)1942;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1380369387 : -726636750;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
