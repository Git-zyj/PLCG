#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 6301939802218048171ULL;
unsigned long long int var_14 = 192291916016480287ULL;
unsigned long long int var_16 = 5939755713367057886ULL;
int zero = 0;
unsigned long long int var_19 = 7763981500763973184ULL;
unsigned long long int var_20 = 14465918401522981453ULL;
unsigned long long int var_21 = 8121741382630416124ULL;
unsigned long long int var_22 = 7597717525683375359ULL;
unsigned long long int var_23 = 17660204334197380584ULL;
unsigned long long int var_24 = 8457574335958082224ULL;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
unsigned long long int arr_2 [18] ;
unsigned long long int arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] [18] [18] ;
unsigned long long int arr_6 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 13044622406586098839ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 9444675008124436085ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 17201969304449617301ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 17519743101500992845ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 7238733019312771216ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = 784397245448188531ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
