#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29090;
unsigned short var_2 = (unsigned short)9277;
int var_3 = -1312476540;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-13234;
unsigned short var_10 = (unsigned short)19540;
unsigned int var_12 = 285591812U;
unsigned long long int var_13 = 13989605710440788325ULL;
unsigned int var_14 = 2093332223U;
int var_15 = 1938770768;
unsigned char var_16 = (unsigned char)6;
short var_17 = (short)-8884;
long long int var_18 = 371981962287252912LL;
int zero = 0;
unsigned short var_19 = (unsigned short)3906;
short var_20 = (short)14923;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 3724969872U;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)59423;
short var_26 = (short)-32707;
short var_27 = (short)27486;
unsigned long long int var_28 = 17786223193441015884ULL;
int var_29 = 1343710438;
_Bool var_30 = (_Bool)0;
short var_31 = (short)-24341;
signed char var_32 = (signed char)-42;
unsigned int arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned long long int arr_2 [23] ;
int arr_4 [23] [23] ;
short arr_9 [23] [23] [23] ;
unsigned int arr_13 [23] [23] ;
signed char arr_16 [13] ;
unsigned char arr_18 [13] ;
unsigned long long int arr_27 [13] ;
unsigned char arr_28 [11] ;
unsigned int arr_34 [23] ;
short arr_3 [23] [23] ;
_Bool arr_6 [23] [23] [23] ;
long long int arr_7 [23] ;
short arr_14 [23] [23] [23] ;
short arr_21 [13] [13] ;
unsigned long long int arr_24 [13] [13] ;
short arr_25 [13] [13] [13] ;
long long int arr_30 [11] ;
long long int arr_31 [11] ;
unsigned long long int arr_35 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 1859729744U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2910798115305524231ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = -250884845;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)3188;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 3326618530U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = 10077676773462081446ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_28 [i_0] = (unsigned char)33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_34 [i_0] = 2708928164U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-11394;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -3972630226414432299LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)31786;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_21 [i_0] [i_1] = (short)29113;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = 5096922972818036980ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)12192;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_30 [i_0] = -353752258597502540LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_31 [i_0] = -8910502602585205688LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_35 [i_0] [i_1] = 6689908000747151353ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
