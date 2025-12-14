#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)4;
unsigned long long int var_3 = 8508102589652774021ULL;
signed char var_5 = (signed char)55;
short var_8 = (short)-8165;
unsigned char var_9 = (unsigned char)126;
signed char var_10 = (signed char)-125;
signed char var_11 = (signed char)-57;
signed char var_12 = (signed char)32;
unsigned long long int var_14 = 8658673974367533080ULL;
long long int var_16 = 2082052467403296993LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)106;
unsigned long long int var_19 = 5016770511805451618ULL;
unsigned char var_20 = (unsigned char)234;
unsigned short var_21 = (unsigned short)61929;
unsigned char var_22 = (unsigned char)150;
signed char var_23 = (signed char)-25;
unsigned short var_24 = (unsigned short)22341;
unsigned char var_25 = (unsigned char)49;
unsigned char arr_0 [23] ;
short arr_1 [23] [23] ;
signed char arr_2 [23] ;
unsigned short arr_4 [20] ;
unsigned long long int arr_5 [20] ;
short arr_8 [22] [22] ;
signed char arr_10 [22] [22] ;
signed char arr_11 [22] [22] ;
short arr_12 [10] ;
unsigned char arr_13 [10] ;
long long int arr_7 [20] [20] ;
short arr_14 [10] ;
int arr_15 [10] ;
_Bool arr_16 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-26662;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)48515;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 14970132980561132947ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-17601 : (short)7642;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)42 : (signed char)-28;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (short)20071;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = -5552629507111280824LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (short)-3832;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -1444832208;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
