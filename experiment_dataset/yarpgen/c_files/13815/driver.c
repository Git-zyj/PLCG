#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1566833173;
unsigned long long int var_7 = 12735159978566333626ULL;
long long int var_8 = -6370827205995317485LL;
int var_15 = 1465876245;
int zero = 0;
short var_16 = (short)26153;
unsigned int var_17 = 2853813851U;
unsigned int var_18 = 2928256167U;
int var_19 = 1234586807;
unsigned long long int var_20 = 11555809400782750336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
