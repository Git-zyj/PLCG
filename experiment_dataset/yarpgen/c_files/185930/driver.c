#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3954355395448141683LL;
long long int var_1 = 106823704439460940LL;
unsigned long long int var_3 = 16525018201541462995ULL;
unsigned long long int var_4 = 12383461751226804800ULL;
short var_5 = (short)-19382;
unsigned int var_6 = 1821348721U;
unsigned short var_7 = (unsigned short)20097;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-35;
long long int var_11 = 4667791946731815178LL;
unsigned short var_12 = (unsigned short)46426;
signed char var_13 = (signed char)-48;
long long int var_14 = -6282832084742169781LL;
int zero = 0;
unsigned int var_15 = 3822113807U;
signed char var_16 = (signed char)69;
long long int var_17 = -87246474324128586LL;
unsigned long long int var_18 = 3336755072088674405ULL;
unsigned long long int arr_0 [13] ;
long long int arr_1 [13] ;
long long int arr_3 [13] [13] ;
unsigned char arr_4 [13] [13] ;
_Bool arr_5 [13] [13] [13] ;
_Bool arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1497577158308117524ULL : 6202146769712705698ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 5272531124659063719LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 6121716864286439084LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)159;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
