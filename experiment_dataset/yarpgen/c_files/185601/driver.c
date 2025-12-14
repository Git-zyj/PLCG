#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)93;
int var_1 = 2146528426;
_Bool var_3 = (_Bool)1;
unsigned int var_7 = 2107863333U;
long long int var_12 = 600132512260050876LL;
short var_14 = (short)21809;
unsigned int var_17 = 1962837943U;
unsigned int var_18 = 1205678091U;
short var_19 = (short)6428;
int zero = 0;
unsigned long long int var_20 = 1971905927037589128ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 157863667U;
unsigned int var_23 = 958586977U;
unsigned int var_24 = 4047037256U;
int var_25 = -601067092;
short var_26 = (short)12467;
short arr_1 [22] ;
unsigned char arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-23948;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)125 : (unsigned char)134;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
