#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 36495533;
unsigned short var_2 = (unsigned short)3899;
unsigned long long int var_10 = 15625802975021258957ULL;
unsigned long long int var_14 = 6502936333607262867ULL;
unsigned short var_15 = (unsigned short)56471;
int zero = 0;
unsigned short var_19 = (unsigned short)27519;
int var_20 = 430390901;
unsigned long long int var_21 = 4954071510823837883ULL;
long long int var_22 = -2449647789389685611LL;
unsigned short var_23 = (unsigned short)24992;
long long int arr_4 [22] [22] [22] ;
int arr_6 [24] [24] ;
unsigned long long int arr_7 [24] ;
int arr_10 [24] [24] [24] ;
unsigned long long int arr_14 [24] [24] [24] [24] ;
int arr_16 [24] [24] [24] ;
unsigned short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -2257430852878220199LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = -1638934152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 6476834167037245105ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 140817845;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 976439039606454423ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 763658972;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)24550;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
