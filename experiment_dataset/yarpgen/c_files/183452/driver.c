#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1429171362337357959ULL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 11869164691825624221ULL;
unsigned char var_3 = (unsigned char)40;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)148;
short var_7 = (short)-7271;
unsigned short var_8 = (unsigned short)64668;
unsigned int var_9 = 2821284189U;
long long int var_10 = -235112278367579176LL;
unsigned short var_11 = (unsigned short)16665;
long long int var_14 = 1053450637575014382LL;
unsigned int var_16 = 2529124329U;
int zero = 0;
long long int var_18 = -4244595727297006237LL;
signed char var_19 = (signed char)-121;
unsigned short var_20 = (unsigned short)53683;
_Bool arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned char arr_2 [23] [23] ;
int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)231;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1677381697;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
