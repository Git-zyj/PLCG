#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)157;
short var_2 = (short)-22371;
unsigned int var_4 = 1049601764U;
int var_5 = -1165302499;
short var_8 = (short)113;
unsigned char var_11 = (unsigned char)151;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)13;
unsigned char var_18 = (unsigned char)205;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)174;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
