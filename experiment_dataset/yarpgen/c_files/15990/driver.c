#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -156241762;
short var_1 = (short)-27003;
signed char var_3 = (signed char)-80;
long long int var_6 = -5877082920065583542LL;
unsigned long long int var_8 = 16799448276084765542ULL;
int var_9 = 1671800629;
unsigned short var_10 = (unsigned short)8175;
short var_11 = (short)-22342;
short var_12 = (short)-16335;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)110;
int zero = 0;
short var_16 = (short)17515;
short var_17 = (short)-27447;
int var_18 = 2053281297;
unsigned int var_19 = 249324554U;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)25;
short var_22 = (short)-30767;
signed char var_23 = (signed char)-55;
short var_24 = (short)1569;
_Bool var_25 = (_Bool)0;
_Bool var_26 = (_Bool)0;
int var_27 = -1511774834;
unsigned char var_28 = (unsigned char)90;
short arr_12 [15] [15] [15] [15] [15] ;
_Bool arr_13 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-23397;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
