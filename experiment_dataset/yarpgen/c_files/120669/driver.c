#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 661828384334223075LL;
long long int var_6 = -1870693756722204400LL;
int zero = 0;
long long int var_15 = 2618245485678273150LL;
signed char var_16 = (signed char)-84;
long long int var_17 = 7560969565470362464LL;
signed char var_18 = (signed char)-48;
unsigned char var_19 = (unsigned char)239;
unsigned char var_20 = (unsigned char)227;
unsigned char arr_0 [11] ;
signed char arr_1 [11] ;
long long int arr_3 [11] ;
long long int arr_4 [11] ;
signed char arr_6 [11] [11] ;
unsigned char arr_7 [11] ;
unsigned char arr_10 [19] ;
signed char arr_11 [19] ;
long long int arr_2 [11] ;
signed char arr_8 [11] ;
signed char arr_9 [11] [11] [11] ;
long long int arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)28;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -1737613586892711512LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -3508034967552717045LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1052692073270043454LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)99 : (signed char)25;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)61 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 8824981536067018704LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
