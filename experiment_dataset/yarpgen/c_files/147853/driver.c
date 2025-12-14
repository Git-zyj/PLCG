#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2889498494U;
unsigned int var_7 = 3739027140U;
unsigned int var_11 = 2433255550U;
unsigned int var_12 = 4001642940U;
int zero = 0;
int var_15 = 1423904545;
int var_16 = -1172774462;
int var_17 = 2026507550;
int var_18 = -2015607260;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
