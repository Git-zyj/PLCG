#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17114430577922270017ULL;
unsigned char var_3 = (unsigned char)134;
unsigned long long int var_5 = 14162939893990637521ULL;
unsigned char var_11 = (unsigned char)134;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)37;
signed char var_17 = (signed char)-56;
short var_18 = (short)-17543;
int var_19 = -1416869228;
int var_20 = -1794876796;
int var_21 = -189208100;
int var_22 = 1899219716;
unsigned long long int arr_0 [12] [12] ;
unsigned char arr_2 [12] ;
unsigned char arr_4 [11] [11] ;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 10593205954214693675ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
