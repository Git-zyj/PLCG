#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)213;
_Bool var_4 = (_Bool)0;
int var_6 = 2108056169;
unsigned long long int var_8 = 1164066398982486425ULL;
unsigned int var_9 = 3970885776U;
unsigned char var_11 = (unsigned char)161;
unsigned int var_12 = 147956192U;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 4293648949U;
unsigned long long int var_15 = 13881225205880030007ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)7146;
long long int var_18 = -8653424671328846960LL;
short var_19 = (short)29362;
unsigned short arr_1 [10] [10] ;
unsigned short arr_2 [10] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)2402;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)9285;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)171;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
