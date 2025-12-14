#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49211;
int var_2 = -1145467277;
unsigned char var_3 = (unsigned char)61;
long long int var_8 = -571230148032736513LL;
unsigned short var_9 = (unsigned short)55192;
int zero = 0;
unsigned short var_12 = (unsigned short)24571;
unsigned long long int var_13 = 11450047404071220949ULL;
unsigned long long int var_14 = 8318179926155962390ULL;
unsigned char var_15 = (unsigned char)173;
unsigned int var_16 = 2159854733U;
signed char var_17 = (signed char)30;
signed char var_18 = (signed char)-126;
signed char var_19 = (signed char)-17;
long long int var_20 = -9108148099111619517LL;
signed char var_21 = (signed char)-35;
long long int arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
unsigned char arr_2 [23] [23] [23] ;
int arr_3 [23] ;
unsigned short arr_6 [11] ;
unsigned short arr_8 [16] ;
unsigned short arr_9 [16] ;
unsigned short arr_10 [16] [16] ;
long long int arr_13 [12] ;
int arr_14 [12] ;
int arr_4 [23] [23] [23] ;
long long int arr_7 [11] ;
signed char arr_11 [16] ;
unsigned char arr_12 [16] ;
int arr_15 [12] ;
unsigned char arr_16 [12] [12] ;
unsigned short arr_17 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 901534710446600775LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)51238;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1630261127;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)33398;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned short)28462;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (unsigned short)31106;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)40820;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = 6314288561724787291LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_14 [i_0] = -1744009640;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1196678686;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = -3809432206316905264LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = (signed char)-15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = 1372024767;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned short)10003;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
