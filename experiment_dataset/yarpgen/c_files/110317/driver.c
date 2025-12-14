#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -605047913;
unsigned short var_1 = (unsigned short)60821;
unsigned short var_2 = (unsigned short)17070;
short var_4 = (short)6837;
unsigned int var_5 = 1104991563U;
unsigned int var_7 = 3894660472U;
short var_8 = (short)-6751;
short var_9 = (short)-1114;
signed char var_10 = (signed char)119;
int var_12 = 1754513274;
unsigned short var_17 = (unsigned short)7707;
int zero = 0;
unsigned long long int var_18 = 1730567736519335167ULL;
unsigned int var_19 = 939927310U;
short var_20 = (short)-29136;
int var_21 = 2050995395;
unsigned short var_22 = (unsigned short)31731;
unsigned short var_23 = (unsigned short)60397;
unsigned int arr_0 [18] [18] ;
unsigned short arr_1 [18] ;
long long int arr_4 [25] [25] ;
int arr_2 [18] [18] ;
unsigned short arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 2736823289U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)43915;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 4770535090478143992LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 531799498;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (unsigned short)62998;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
