#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1933;
int var_4 = -383737127;
unsigned long long int var_9 = 2451773744203562614ULL;
int var_10 = -81531711;
_Bool var_12 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_19 = (short)-10234;
int var_20 = -2010832558;
unsigned short var_21 = (unsigned short)2291;
short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned long long int arr_2 [23] [23] ;
short arr_3 [23] ;
unsigned short arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)174 : (short)-17802;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60843 : (unsigned short)48342;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 7330866969400025302ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-6451 : (short)-9064;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)36291 : (unsigned short)46950;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
