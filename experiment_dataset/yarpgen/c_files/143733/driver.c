#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19904;
unsigned short var_2 = (unsigned short)24279;
int var_3 = -502900984;
int var_4 = -1972291619;
short var_10 = (short)-4542;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)52140;
short var_15 = (short)-25213;
int var_16 = 814842601;
_Bool var_17 = (_Bool)1;
long long int var_18 = -5649623920600047419LL;
short var_19 = (short)-12484;
unsigned long long int var_20 = 1607064704720660607ULL;
short var_21 = (short)28918;
_Bool var_22 = (_Bool)1;
int var_23 = 1776603656;
short var_24 = (short)12368;
_Bool var_25 = (_Bool)0;
unsigned long long int arr_0 [21] [21] ;
unsigned long long int arr_1 [21] [21] ;
short arr_2 [21] [21] [21] ;
unsigned short arr_5 [21] [21] ;
_Bool arr_8 [21] ;
unsigned char arr_11 [14] [14] ;
int arr_12 [14] ;
int arr_15 [24] ;
signed char arr_16 [24] ;
unsigned long long int arr_9 [21] [21] ;
long long int arr_14 [14] [14] ;
unsigned short arr_19 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 14210413126892913573ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 16862356545334622797ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)12283;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)65479;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)141 : (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1108253837 : -300591132;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = -617740404;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 9794028728672459380ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? 5302164368348817279LL : 7085895315689307661LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (unsigned short)35923 : (unsigned short)21536;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
