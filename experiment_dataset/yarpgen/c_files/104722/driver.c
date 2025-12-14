#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1375788863U;
_Bool var_4 = (_Bool)0;
int var_5 = -698031380;
unsigned short var_15 = (unsigned short)2568;
int var_18 = 1911252835;
int zero = 0;
long long int var_19 = -4610132067612173297LL;
unsigned int var_20 = 3927112498U;
int var_21 = 1053482607;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
