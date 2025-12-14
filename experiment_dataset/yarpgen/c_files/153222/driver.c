#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1862147487;
unsigned int var_2 = 768133409U;
unsigned short var_3 = (unsigned short)45358;
int var_5 = -530047818;
long long int var_7 = -5812440119297445418LL;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6327587606392215532LL;
unsigned short var_12 = (unsigned short)42605;
long long int var_13 = -1959653991302428812LL;
int zero = 0;
unsigned int var_14 = 322641626U;
_Bool var_15 = (_Bool)0;
long long int var_16 = 6981348024702976931LL;
unsigned char arr_1 [13] [13] ;
long long int arr_2 [13] ;
unsigned int arr_3 [13] ;
int arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 96605671302025877LL : -3185690957146451847LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3303292958U : 2939606957U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 806049719 : 445595362;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
