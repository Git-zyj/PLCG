#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 575328993U;
unsigned int var_3 = 3162016373U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2826333396U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 1197156205;
short var_13 = (short)27652;
unsigned long long int var_14 = 9679877976195081348ULL;
long long int var_15 = -169354782644089999LL;
unsigned int arr_0 [11] ;
unsigned char arr_2 [11] [11] ;
unsigned short arr_3 [11] ;
short arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1200296826U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)60319;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (short)8719;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
