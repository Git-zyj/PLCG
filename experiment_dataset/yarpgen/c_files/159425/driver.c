#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5234971325346701728ULL;
unsigned long long int var_1 = 6232607887866156049ULL;
short var_2 = (short)30382;
int var_3 = -203891295;
unsigned char var_4 = (unsigned char)238;
short var_6 = (short)-8032;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 2265871029118630227ULL;
signed char var_13 = (signed char)-45;
unsigned short var_14 = (unsigned short)38866;
unsigned short var_15 = (unsigned short)13853;
int var_16 = -1890802290;
unsigned long long int var_17 = 7224161164646748321ULL;
unsigned long long int var_18 = 1448456323755600096ULL;
unsigned int arr_0 [25] [25] ;
unsigned long long int arr_1 [25] [25] ;
unsigned short arr_2 [25] ;
unsigned char arr_3 [23] ;
_Bool arr_7 [23] [23] ;
short arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 3003481011U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = 16596130441455388576ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)29066;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (short)6099;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
