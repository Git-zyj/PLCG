#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18923;
unsigned short var_4 = (unsigned short)19567;
unsigned long long int var_6 = 9332090703462373617ULL;
unsigned long long int var_9 = 5162274441379091995ULL;
unsigned short var_10 = (unsigned short)12646;
int zero = 0;
unsigned long long int var_12 = 7490907006669304472ULL;
unsigned long long int var_13 = 8343380578472906419ULL;
unsigned short var_14 = (unsigned short)52006;
unsigned long long int var_15 = 11099237045889406346ULL;
unsigned short var_16 = (unsigned short)43813;
unsigned short var_17 = (unsigned short)986;
unsigned short arr_1 [20] ;
unsigned short arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_7 [24] [24] ;
unsigned short arr_4 [20] ;
unsigned short arr_9 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)2738;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned short)47905;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 6994259148539631000ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 7093933224615473956ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned short)5307;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)10411 : (unsigned short)56490;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
