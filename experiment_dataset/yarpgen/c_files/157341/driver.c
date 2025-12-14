#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-105;
signed char var_6 = (signed char)40;
unsigned char var_7 = (unsigned char)206;
short var_10 = (short)6857;
unsigned char var_16 = (unsigned char)46;
long long int var_19 = -8788732231546133879LL;
int zero = 0;
long long int var_20 = -4350971874915701681LL;
_Bool var_21 = (_Bool)0;
short var_22 = (short)3804;
unsigned char var_23 = (unsigned char)213;
unsigned int var_24 = 3825828835U;
short var_25 = (short)-30416;
short var_26 = (short)1454;
unsigned short arr_1 [15] ;
unsigned char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)36617;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)227;
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
