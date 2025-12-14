#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3321855932U;
unsigned short var_13 = (unsigned short)38542;
long long int var_15 = -5455374608998449597LL;
unsigned short var_17 = (unsigned short)6130;
int zero = 0;
long long int var_19 = -5132744390776141601LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
