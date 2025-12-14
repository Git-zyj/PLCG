#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59946;
int var_3 = -1390117168;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 2067576035076619753ULL;
unsigned char var_11 = (unsigned char)99;
short var_12 = (short)15461;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-17;
int var_15 = -2086792615;
short var_16 = (short)7271;
unsigned short var_17 = (unsigned short)12619;
_Bool var_18 = (_Bool)0;
unsigned char arr_0 [16] ;
long long int arr_1 [16] ;
_Bool arr_2 [16] [16] ;
long long int arr_3 [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 6916895310722417203LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -5584022060622329220LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
