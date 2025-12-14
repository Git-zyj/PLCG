#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -67245513;
signed char var_2 = (signed char)39;
signed char var_3 = (signed char)-76;
short var_4 = (short)-23512;
unsigned int var_9 = 2099060437U;
long long int var_10 = -6721583705269749871LL;
int zero = 0;
signed char var_11 = (signed char)4;
short var_12 = (short)29336;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
