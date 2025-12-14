#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 4912687312448857644ULL;
int var_14 = 1622147252;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 13615353343109773019ULL;
short var_19 = (short)-17950;
unsigned short var_20 = (unsigned short)36052;
void init() {
}

void checksum() {
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
