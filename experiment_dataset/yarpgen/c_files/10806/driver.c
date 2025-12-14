#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28036;
unsigned long long int var_2 = 8311265198947417386ULL;
int var_3 = 1992474094;
signed char var_4 = (signed char)-118;
short var_7 = (short)2944;
long long int var_8 = -7665319245213523466LL;
unsigned short var_10 = (unsigned short)16593;
unsigned int var_13 = 124854388U;
unsigned long long int var_15 = 13196633651695044385ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)2619;
int var_18 = -441204531;
signed char var_19 = (signed char)62;
unsigned char var_20 = (unsigned char)46;
_Bool var_21 = (_Bool)1;
signed char arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
long long int arr_3 [13] [13] [13] ;
signed char arr_4 [13] ;
unsigned int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 17755866060723427092ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1509956427789644346LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-125 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 2865792157U : 2448949915U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
