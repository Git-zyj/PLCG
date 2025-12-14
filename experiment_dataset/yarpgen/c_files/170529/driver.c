#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_5 = (signed char)-40;
unsigned char var_6 = (unsigned char)222;
int var_7 = 1119089010;
int var_10 = 190828835;
long long int var_11 = 2410085814718532307LL;
int var_12 = 1810421036;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 10359713012333136175ULL;
int var_16 = -241279612;
unsigned int var_17 = 1580307973U;
unsigned long long int var_18 = 16076819197646334813ULL;
_Bool var_19 = (_Bool)1;
int arr_1 [13] ;
_Bool arr_2 [15] ;
int arr_3 [15] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -582651885;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -258788588;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 1253750999;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
