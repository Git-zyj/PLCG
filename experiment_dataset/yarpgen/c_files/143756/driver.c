#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2078455063;
int var_1 = 1163682959;
signed char var_3 = (signed char)-54;
short var_4 = (short)3392;
unsigned char var_5 = (unsigned char)136;
unsigned char var_6 = (unsigned char)197;
int var_8 = -31472347;
unsigned short var_9 = (unsigned short)29942;
int var_10 = -609582428;
int zero = 0;
long long int var_11 = 6220838676714391081LL;
short var_12 = (short)22812;
long long int var_13 = -766775651736551614LL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)124;
int var_16 = -181688611;
int var_17 = -1824586452;
unsigned char var_18 = (unsigned char)254;
signed char var_19 = (signed char)-94;
signed char var_20 = (signed char)15;
long long int var_21 = -8858466621726131017LL;
short var_22 = (short)-6239;
unsigned short var_23 = (unsigned short)51879;
unsigned short var_24 = (unsigned short)18128;
_Bool var_25 = (_Bool)0;
short arr_0 [23] ;
int arr_1 [23] [23] ;
_Bool arr_2 [23] [23] ;
signed char arr_3 [23] [23] ;
unsigned short arr_6 [23] ;
unsigned short arr_9 [23] [23] ;
int arr_10 [23] ;
unsigned int arr_11 [23] ;
signed char arr_13 [22] ;
int arr_15 [22] [22] ;
int arr_16 [22] [22] ;
unsigned int arr_17 [22] [22] [22] [22] ;
signed char arr_18 [22] ;
unsigned long long int arr_19 [22] [22] [22] [22] ;
signed char arr_22 [11] ;
signed char arr_26 [14] ;
long long int arr_28 [14] ;
long long int arr_35 [25] ;
short arr_36 [25] [25] ;
unsigned char arr_39 [18] ;
long long int arr_40 [18] ;
unsigned short arr_4 [23] [23] ;
unsigned long long int arr_7 [23] ;
short arr_8 [23] ;
_Bool arr_12 [23] ;
short arr_20 [22] [22] ;
_Bool arr_21 [22] [22] ;
unsigned short arr_37 [25] ;
_Bool arr_38 [25] ;
signed char arr_41 [18] ;
int arr_42 [18] ;
signed char arr_43 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)29478;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -535933216;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)22424;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)15918;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 1840971053;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 3953155027U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -405803676 : -177289345;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? -1254845518 : -1040349785;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 461648425U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-51 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = 5523351533516055841ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)-86;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = -2178786087321853086LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = -1530779770717022154LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_36 [i_0] [i_1] = (short)-24058;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_39 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = -4666019740840686406LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)47223;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2055498843847120930ULL : 10361333949245851271ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)27509 : (short)18432;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-9807 : (short)30173;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_37 [i_0] = (unsigned short)8967;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_41 [i_0] = (signed char)122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = 755584028;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_43 [i_0] [i_1] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
