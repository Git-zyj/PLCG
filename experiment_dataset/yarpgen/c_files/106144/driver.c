#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 708306830;
signed char var_3 = (signed char)23;
int var_4 = -1490318472;
unsigned short var_5 = (unsigned short)38316;
short var_6 = (short)-11400;
unsigned short var_7 = (unsigned short)1387;
signed char var_11 = (signed char)-88;
signed char var_12 = (signed char)-62;
int zero = 0;
unsigned short var_15 = (unsigned short)7659;
unsigned short var_16 = (unsigned short)50769;
int var_17 = -912182463;
unsigned short var_18 = (unsigned short)30090;
int var_19 = -1555718118;
unsigned short var_20 = (unsigned short)59067;
unsigned short arr_0 [14] [14] ;
unsigned char arr_1 [14] [14] ;
int arr_4 [10] [10] ;
short arr_5 [10] [10] ;
int arr_6 [10] ;
signed char arr_2 [14] ;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)52975;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 26303208;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (short)12297;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = -1955097536;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-9 : (signed char)109;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1447550507 : -1945021837;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
