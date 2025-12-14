#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)29967;
long long int var_2 = 175515371041982624LL;
long long int var_3 = 6082018334348529524LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)31070;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-22633;
long long int var_8 = 6839440105477124805LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)164;
signed char var_12 = (signed char)84;
unsigned long long int var_13 = 18295923919039163662ULL;
long long int var_14 = -9167244679551602427LL;
short var_15 = (short)28135;
signed char var_16 = (signed char)-84;
signed char var_17 = (signed char)-101;
signed char var_18 = (signed char)(-127 - 1);
long long int arr_9 [22] ;
short arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -2738293211262337474LL : 2476267201109084120LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-1641 : (short)25245;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
