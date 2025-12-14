#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 8567077165098632281ULL;
int zero = 0;
short var_12 = (short)-31525;
long long int var_13 = -7044150728672139033LL;
unsigned int var_14 = 3074440849U;
long long int var_15 = -7313586328044061964LL;
unsigned long long int var_16 = 13126346784613384529ULL;
void init() {
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
