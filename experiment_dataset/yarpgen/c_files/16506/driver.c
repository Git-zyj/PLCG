#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1631260319;
_Bool var_1 = (_Bool)0;
int var_3 = 2001855299;
unsigned short var_7 = (unsigned short)23337;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_10 = 1121424494;
unsigned short var_11 = (unsigned short)37284;
unsigned short var_12 = (unsigned short)57816;
unsigned short var_13 = (unsigned short)38115;
unsigned long long int var_14 = 16483862779357561975ULL;
unsigned short arr_1 [15] ;
short arr_2 [15] [15] [15] ;
unsigned short arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)23200;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)23928;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned short)29588;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
