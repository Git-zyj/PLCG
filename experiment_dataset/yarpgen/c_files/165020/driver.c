#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1352800691;
unsigned int var_5 = 3015033058U;
_Bool var_10 = (_Bool)0;
unsigned short var_16 = (unsigned short)8725;
int zero = 0;
short var_17 = (short)9678;
unsigned int var_18 = 1154541247U;
long long int var_19 = -6687134058904798132LL;
unsigned short var_20 = (unsigned short)62411;
unsigned char arr_4 [24] ;
short arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)49;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (short)21315;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
