#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 590495082U;
short var_1 = (short)-20027;
short var_3 = (short)7123;
short var_4 = (short)25367;
unsigned int var_5 = 476107942U;
unsigned int var_6 = 1689648389U;
short var_7 = (short)-20506;
unsigned int var_8 = 4043122788U;
short var_9 = (short)20716;
int zero = 0;
short var_11 = (short)-27953;
unsigned int var_12 = 3350131991U;
short var_13 = (short)22204;
unsigned int var_14 = 1707726576U;
unsigned int var_15 = 3051068416U;
short var_16 = (short)22376;
unsigned int arr_0 [12] ;
unsigned int arr_1 [12] ;
short arr_3 [12] ;
short arr_4 [12] ;
unsigned int arr_9 [21] ;
unsigned int arr_10 [21] ;
short arr_12 [21] ;
unsigned int arr_13 [21] [21] ;
short arr_14 [21] [21] ;
unsigned int arr_15 [21] ;
unsigned int arr_2 [12] [12] ;
unsigned int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2871803512U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3314366618U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-19524 : (short)-22160;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)-637;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 3632959088U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 4062629625U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (short)-2012;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 1310447406U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-19261 : (short)23373;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 3855730974U : 3605143726U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 799603577U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 414416152U : 3768780726U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
