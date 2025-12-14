#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1302287531;
signed char var_5 = (signed char)-100;
int var_6 = -6433481;
long long int var_7 = -2362445886829182252LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)15768;
signed char var_12 = (signed char)35;
int var_13 = -1366676426;
short var_14 = (short)29212;
signed char var_15 = (signed char)100;
unsigned int var_16 = 1213666521U;
short var_17 = (short)15214;
short var_18 = (short)2169;
short var_19 = (short)-1110;
int arr_0 [20] [20] ;
short arr_1 [20] ;
_Bool arr_3 [20] [20] ;
int arr_4 [20] [20] [20] ;
int arr_6 [20] ;
int arr_7 [20] ;
short arr_8 [20] ;
short arr_2 [20] [20] ;
unsigned int arr_5 [20] [20] ;
unsigned int arr_11 [18] [18] ;
unsigned char arr_12 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -778274315;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (short)1954;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 93571507 : 175423119;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = -1650752289;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 1480987237;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (short)-28003;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-15640 : (short)-23753;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1051108484U : 2765621872U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = 626936118U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned char)76;
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
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
