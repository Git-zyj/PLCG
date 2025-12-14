#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3175999450U;
_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)70;
unsigned int var_8 = 697241283U;
int zero = 0;
int var_10 = -1196386758;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3673975287050790062ULL;
short var_13 = (short)17640;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
