#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6920;
signed char var_4 = (signed char)36;
signed char var_6 = (signed char)-13;
signed char var_8 = (signed char)-6;
signed char var_9 = (signed char)-52;
int zero = 0;
unsigned long long int var_15 = 1378994193158769563ULL;
unsigned long long int var_16 = 8333610638891863905ULL;
signed char var_17 = (signed char)-118;
short var_18 = (short)-14975;
unsigned long long int var_19 = 9328001627279658367ULL;
signed char var_20 = (signed char)-120;
int arr_1 [16] [16] ;
int arr_2 [16] [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
unsigned long long int arr_6 [16] ;
int arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 86928585;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 562574860;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 17443153825049847908ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 8376277330284274142ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2102104639 : -315366998;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
