#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1258530778;
_Bool var_2 = (_Bool)0;
short var_3 = (short)24485;
unsigned int var_5 = 2453478710U;
signed char var_6 = (signed char)-127;
signed char var_11 = (signed char)-91;
int zero = 0;
unsigned long long int var_12 = 7041226220537517291ULL;
unsigned long long int var_13 = 11862354726972526997ULL;
signed char var_14 = (signed char)-39;
unsigned long long int var_15 = 210178499589004783ULL;
unsigned long long int var_16 = 9628507597442315366ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-12083;
unsigned long long int var_19 = 3985815022152810343ULL;
unsigned long long int var_20 = 10050557149711532815ULL;
short var_21 = (short)-23907;
_Bool var_22 = (_Bool)0;
long long int var_23 = -482550101888135925LL;
int var_24 = 1207420700;
short var_25 = (short)29360;
_Bool arr_0 [16] [16] ;
_Bool arr_1 [16] ;
unsigned long long int arr_2 [16] [16] [16] ;
long long int arr_4 [16] [16] [16] ;
long long int arr_5 [16] [16] ;
unsigned int arr_6 [16] ;
int arr_7 [16] [16] [16] ;
int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 9064417747241177263ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -5457187764267883484LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 6320497700392729859LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 2629690534U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 1907173659;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 1260367129;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
