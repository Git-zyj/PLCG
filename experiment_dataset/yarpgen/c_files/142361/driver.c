#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1169125529;
unsigned short var_4 = (unsigned short)14212;
unsigned short var_5 = (unsigned short)14658;
int var_6 = 163355443;
int var_9 = -1495754351;
int var_10 = 2039397681;
int var_11 = -749221215;
unsigned short var_12 = (unsigned short)56330;
unsigned short var_13 = (unsigned short)42549;
unsigned short var_14 = (unsigned short)8328;
unsigned short var_15 = (unsigned short)32266;
unsigned int var_16 = 890167846U;
unsigned int var_17 = 3867770045U;
unsigned short var_18 = (unsigned short)25530;
int var_19 = 280896333;
int zero = 0;
int var_20 = 1577729827;
int var_21 = -192089499;
int var_22 = -1263091084;
unsigned int var_23 = 1513824200U;
int var_24 = 1992761910;
unsigned int var_25 = 2484255338U;
unsigned int var_26 = 1756962538U;
int var_27 = 1762324635;
int var_28 = -1415045166;
unsigned short var_29 = (unsigned short)29731;
int arr_0 [24] [24] ;
int arr_2 [24] ;
int arr_4 [24] ;
unsigned int arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] [24] [24] [24] ;
unsigned short arr_7 [24] [24] [24] [24] [24] [24] ;
int arr_16 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -977121904;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 157544653;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -2046601248;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 624563199U : 2023020562U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)57100 : (unsigned short)44538;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? (unsigned short)1341 : (unsigned short)31745;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -1461738362 : 1709341223;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
