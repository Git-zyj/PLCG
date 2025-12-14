#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41197;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)20001;
int var_4 = 1013470002;
unsigned char var_5 = (unsigned char)234;
unsigned short var_7 = (unsigned short)60437;
signed char var_9 = (signed char)57;
int zero = 0;
unsigned char var_12 = (unsigned char)55;
unsigned short var_13 = (unsigned short)28526;
int var_14 = 1314307489;
signed char var_15 = (signed char)-25;
unsigned long long int var_16 = 11069982836594995636ULL;
unsigned char var_17 = (unsigned char)184;
unsigned char var_18 = (unsigned char)123;
short var_19 = (short)29373;
long long int var_20 = -6823021191133201625LL;
short var_21 = (short)-4993;
unsigned short var_22 = (unsigned short)6525;
unsigned long long int var_23 = 8570920884081118678ULL;
unsigned short var_24 = (unsigned short)36205;
int var_25 = -820853673;
signed char var_26 = (signed char)-79;
signed char arr_0 [22] ;
unsigned int arr_2 [22] ;
unsigned long long int arr_3 [22] ;
short arr_4 [22] [22] ;
short arr_5 [22] [22] ;
short arr_6 [22] [22] [22] ;
signed char arr_10 [22] [22] [22] ;
int arr_11 [22] ;
signed char arr_14 [23] ;
signed char arr_15 [23] ;
unsigned int arr_16 [23] ;
unsigned char arr_18 [24] [24] ;
signed char arr_19 [24] ;
unsigned char arr_7 [22] ;
short arr_13 [22] [22] [22] ;
_Bool arr_17 [23] [23] ;
short arr_20 [24] [24] ;
signed char arr_21 [24] [24] ;
unsigned char arr_22 [24] [24] ;
unsigned long long int arr_26 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3144155556U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 6545199977375458528ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (short)939;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (short)28643;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)4320;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = 628751889;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 1189439473U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)194;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = (signed char)13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)569;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-10027;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 17707312850381308544ULL : 17848574205770493233ULL;
}

void checksum() {
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
