#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)117;
unsigned char var_2 = (unsigned char)155;
_Bool var_3 = (_Bool)1;
short var_4 = (short)20133;
unsigned char var_5 = (unsigned char)160;
short var_7 = (short)8344;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)35;
unsigned char var_12 = (unsigned char)182;
int zero = 0;
unsigned char var_13 = (unsigned char)201;
short var_14 = (short)-1776;
unsigned char var_15 = (unsigned char)235;
short var_16 = (short)217;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)116;
_Bool var_19 = (_Bool)1;
short arr_0 [15] [15] ;
_Bool arr_1 [15] ;
_Bool arr_3 [15] ;
_Bool arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-12844;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
