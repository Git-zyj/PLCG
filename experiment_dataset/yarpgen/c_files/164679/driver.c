#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3490585922455868829ULL;
unsigned short var_1 = (unsigned short)35621;
short var_3 = (short)7507;
signed char var_4 = (signed char)39;
signed char var_5 = (signed char)-86;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 4212484442U;
signed char var_10 = (signed char)1;
unsigned char var_11 = (unsigned char)188;
unsigned long long int var_12 = 1591396068190861137ULL;
short var_13 = (short)4379;
int zero = 0;
unsigned short var_14 = (unsigned short)37204;
_Bool var_15 = (_Bool)1;
short var_16 = (short)3729;
unsigned short var_17 = (unsigned short)29432;
unsigned long long int var_18 = 9997311685360442552ULL;
unsigned int var_19 = 1183108696U;
unsigned short arr_0 [23] ;
int arr_1 [23] ;
_Bool arr_2 [23] [23] ;
_Bool arr_3 [23] ;
_Bool arr_4 [23] [23] [23] ;
_Bool arr_5 [23] ;
_Bool arr_6 [23] [23] [23] [23] ;
unsigned int arr_7 [23] ;
unsigned short arr_8 [23] ;
unsigned short arr_9 [23] [23] ;
int arr_10 [23] ;
short arr_11 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)7168;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 1418184371;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 3923921223U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)14601;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)18890;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 852946142;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (short)25507;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
