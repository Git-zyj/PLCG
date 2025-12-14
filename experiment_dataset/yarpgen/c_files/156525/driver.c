#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)49;
unsigned int var_6 = 273630193U;
signed char var_15 = (signed char)-30;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)62;
int zero = 0;
signed char var_20 = (signed char)-28;
unsigned long long int var_21 = 13425141981243914483ULL;
signed char var_22 = (signed char)-85;
long long int var_23 = -9195191345071035879LL;
short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)-2482;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
