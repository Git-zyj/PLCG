#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)21438;
signed char var_8 = (signed char)42;
short var_15 = (short)-22810;
int var_18 = -182858790;
unsigned char var_19 = (unsigned char)240;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-26132;
short var_22 = (short)14916;
long long int var_23 = -4949146193702065934LL;
short var_24 = (short)-255;
long long int var_25 = -1279889403968463781LL;
signed char var_26 = (signed char)78;
unsigned long long int arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 13878128716144952819ULL : 11397146065146169060ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
