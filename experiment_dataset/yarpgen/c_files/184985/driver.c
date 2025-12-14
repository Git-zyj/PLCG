#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59441;
unsigned short var_3 = (unsigned short)43163;
_Bool var_4 = (_Bool)0;
unsigned short var_6 = (unsigned short)65388;
unsigned long long int var_10 = 5009088020632316536ULL;
int zero = 0;
long long int var_11 = -2771357765923773613LL;
unsigned long long int var_12 = 10609779938798893836ULL;
short var_13 = (short)2507;
long long int var_14 = -8893572622318226343LL;
unsigned int var_15 = 544772704U;
unsigned char arr_0 [11] ;
signed char arr_1 [11] ;
_Bool arr_2 [11] [11] ;
short arr_3 [11] ;
long long int arr_4 [11] ;
unsigned int arr_5 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-13359;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -4279382109943091618LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = 3472202350U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
