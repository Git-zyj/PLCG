#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10597;
unsigned long long int var_11 = 8464696119752916966ULL;
unsigned int var_12 = 2738732043U;
int zero = 0;
short var_18 = (short)-8276;
unsigned int var_19 = 2035493058U;
signed char var_20 = (signed char)48;
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
