#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 163137933U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 18276011877489077670ULL;
unsigned long long int var_7 = 16777922788570915547ULL;
unsigned int var_8 = 493387597U;
int var_10 = 1149002341;
short var_11 = (short)-7685;
_Bool var_12 = (_Bool)1;
short var_13 = (short)15531;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)16138;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 358708413U;
unsigned char var_18 = (unsigned char)167;
unsigned int var_19 = 1850155733U;
signed char var_20 = (signed char)-122;
short arr_4 [18] [18] ;
short arr_5 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (short)15870;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)6168 : (short)19610;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
