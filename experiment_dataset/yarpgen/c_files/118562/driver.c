#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 35457946;
unsigned int var_6 = 1167095498U;
long long int var_8 = -1903927022339115393LL;
int var_10 = -1355344360;
int zero = 0;
short var_12 = (short)-29698;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2060953218U;
short var_15 = (short)-11929;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
