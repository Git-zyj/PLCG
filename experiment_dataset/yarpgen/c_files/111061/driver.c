#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -576001987;
_Bool var_1 = (_Bool)1;
int var_2 = 1768119625;
long long int var_4 = -243773426600838365LL;
long long int var_5 = 8865484589676738269LL;
long long int var_9 = 6555344256294821159LL;
int var_10 = -593044973;
unsigned char var_12 = (unsigned char)208;
signed char var_14 = (signed char)85;
int zero = 0;
long long int var_15 = 8099161865619506758LL;
long long int var_16 = 3082839118961537998LL;
_Bool var_17 = (_Bool)1;
int var_18 = 897512176;
unsigned char var_19 = (unsigned char)116;
long long int var_20 = -4339338272682538337LL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
int var_24 = 1699843768;
unsigned long long int var_25 = 9103145904621705103ULL;
long long int arr_0 [21] ;
unsigned long long int arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
_Bool arr_3 [21] [21] ;
unsigned long long int arr_4 [21] ;
_Bool arr_5 [21] [21] ;
unsigned short arr_11 [21] [21] ;
long long int arr_12 [21] ;
signed char arr_14 [21] ;
unsigned long long int arr_6 [21] ;
unsigned short arr_7 [21] [21] ;
_Bool arr_8 [21] [21] ;
long long int arr_9 [21] ;
int arr_16 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -2001001144917221595LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 13977380146464398826ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 427180029U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 364653570928584530ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)9217;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -1840774397131690140LL : -4549826907706665428LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-51 : (signed char)103;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 7464287290623942282ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)40875;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = -7563374810828311262LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? -857586410 : -236752594;
}

void checksum() {
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
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
