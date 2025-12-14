#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1756068272;
unsigned char var_3 = (unsigned char)133;
unsigned short var_4 = (unsigned short)920;
unsigned short var_5 = (unsigned short)12150;
short var_6 = (short)8489;
unsigned long long int var_7 = 14232811957202056296ULL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)16;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)43880;
unsigned short var_13 = (unsigned short)5538;
int var_15 = -1126799396;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)16;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)50;
unsigned long long int var_22 = 3463614475143377980ULL;
short var_23 = (short)-1628;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 13007555620001791079ULL;
unsigned short var_26 = (unsigned short)60498;
unsigned char var_27 = (unsigned char)238;
unsigned long long int var_28 = 15455495262337356424ULL;
unsigned long long int var_29 = 2407498688531392104ULL;
signed char var_30 = (signed char)12;
unsigned long long int arr_0 [16] ;
unsigned long long int arr_1 [16] [16] ;
unsigned short arr_4 [16] ;
unsigned char arr_5 [16] ;
unsigned short arr_10 [16] [16] [16] [16] ;
int arr_11 [16] [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 16014031424939871094ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 9596799740818559642ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)26878;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)26433;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2006318897;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
