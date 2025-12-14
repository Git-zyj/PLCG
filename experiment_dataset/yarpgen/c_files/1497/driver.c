#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)19950;
short var_2 = (short)-21260;
signed char var_3 = (signed char)29;
short var_4 = (short)-1122;
unsigned long long int var_5 = 17214048266554035447ULL;
unsigned long long int var_6 = 14903959244713682437ULL;
short var_8 = (short)31729;
int var_9 = -303791364;
unsigned int var_10 = 2199521693U;
short var_12 = (short)8039;
int zero = 0;
int var_13 = 1771623711;
short var_14 = (short)29978;
long long int var_15 = 6876651826496523919LL;
unsigned long long int var_16 = 10943003605535093713ULL;
unsigned long long int var_17 = 13973039615115017703ULL;
unsigned int var_18 = 952198329U;
long long int var_19 = 7631231811368014007LL;
unsigned int arr_0 [16] ;
unsigned short arr_7 [16] ;
unsigned short arr_8 [16] [16] ;
unsigned short arr_9 [16] [16] [16] ;
signed char arr_10 [16] [16] ;
int arr_12 [16] [16] [16] [16] ;
short arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 4042689434U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned short)19048;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)12349 : (unsigned short)53786;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)6871 : (unsigned short)21492;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)13 : (signed char)-3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -911859706;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)12618 : (short)-477;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
