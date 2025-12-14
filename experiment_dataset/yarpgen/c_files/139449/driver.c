#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
signed char var_2 = (signed char)16;
unsigned long long int var_3 = 7233664347660398245ULL;
signed char var_4 = (signed char)-10;
int var_5 = -129894517;
unsigned char var_6 = (unsigned char)109;
unsigned int var_8 = 3296984196U;
unsigned char var_9 = (unsigned char)116;
unsigned short var_10 = (unsigned short)51661;
unsigned short var_11 = (unsigned short)24864;
signed char var_16 = (signed char)99;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-88;
unsigned char var_20 = (unsigned char)238;
unsigned short var_21 = (unsigned short)6087;
unsigned long long int var_22 = 14228890508083138413ULL;
_Bool var_23 = (_Bool)1;
int var_24 = -1336234256;
short arr_0 [15] [15] ;
signed char arr_1 [15] [15] ;
_Bool arr_3 [25] [25] ;
int arr_4 [25] ;
unsigned int arr_5 [25] [25] ;
_Bool arr_7 [23] ;
_Bool arr_8 [23] ;
unsigned short arr_9 [23] ;
unsigned short arr_2 [15] ;
unsigned long long int arr_6 [25] ;
signed char arr_10 [23] [23] ;
int arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-11564;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 542232807;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 1931871558U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)64272;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)15102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 1148416151704682480ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 2114485523;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
