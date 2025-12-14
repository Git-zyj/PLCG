#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1459347370U;
signed char var_5 = (signed char)19;
int var_7 = -1326770369;
int var_11 = -1554260445;
int var_12 = 1877203903;
int zero = 0;
int var_15 = 1514900201;
int var_16 = 1308513686;
long long int var_17 = -1885883863143963562LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
