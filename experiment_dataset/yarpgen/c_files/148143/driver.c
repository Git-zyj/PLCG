#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)92;
unsigned short var_3 = (unsigned short)18686;
short var_6 = (short)18126;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned long long int var_13 = 86303586517752414ULL;
unsigned char var_16 = (unsigned char)174;
int zero = 0;
unsigned int var_18 = 415208334U;
_Bool var_19 = (_Bool)0;
long long int var_20 = 3858007803570383922LL;
unsigned char var_21 = (unsigned char)61;
unsigned int var_22 = 1608635740U;
signed char var_23 = (signed char)-59;
unsigned long long int var_24 = 6833776716862277819ULL;
unsigned long long int var_25 = 17625528288785513431ULL;
short var_26 = (short)-21573;
long long int var_27 = 7589192503681887555LL;
short var_28 = (short)30357;
long long int var_29 = -5736118758463845700LL;
unsigned char var_30 = (unsigned char)97;
signed char var_31 = (signed char)-7;
_Bool var_32 = (_Bool)1;
int var_33 = -189974741;
unsigned long long int var_34 = 13586211039521255048ULL;
unsigned int var_35 = 487062145U;
unsigned int var_36 = 342630576U;
unsigned short var_37 = (unsigned short)17324;
_Bool arr_0 [16] ;
_Bool arr_1 [16] ;
signed char arr_2 [16] ;
signed char arr_3 [15] ;
long long int arr_4 [15] ;
short arr_5 [13] [13] ;
long long int arr_9 [13] [13] ;
_Bool arr_11 [13] [13] [13] ;
unsigned short arr_19 [25] [25] ;
long long int arr_20 [25] ;
_Bool arr_12 [13] ;
short arr_17 [13] [13] [13] ;
unsigned long long int arr_23 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 9178228790772323189LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (short)12957;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = -8142499153015328617LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_19 [i_0] [i_1] = (unsigned short)12833;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = -7328918608695429971LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (short)18365;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_23 [i_0] = 11211314232676637112ULL;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
