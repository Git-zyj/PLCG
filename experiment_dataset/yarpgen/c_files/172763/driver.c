#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
long long int var_7 = -7382594921506696944LL;
long long int var_8 = 854162059279393635LL;
long long int var_9 = 7408484756161480064LL;
unsigned int var_10 = 592392129U;
int var_11 = -424316370;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)213;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1734833154U;
unsigned char var_16 = (unsigned char)78;
unsigned char arr_0 [15] ;
unsigned char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)149;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
