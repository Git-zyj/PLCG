#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)43;
unsigned int var_7 = 1375158020U;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_20 = -2114942991105329004LL;
long long int var_21 = 7391542281506781236LL;
_Bool var_22 = (_Bool)0;
long long int var_23 = -6857783697242103072LL;
unsigned long long int var_24 = 7828612928297383635ULL;
_Bool arr_2 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
