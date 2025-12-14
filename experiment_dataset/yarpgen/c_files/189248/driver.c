#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -495963313;
short var_1 = (short)10654;
signed char var_2 = (signed char)-114;
int var_4 = 1266297432;
unsigned long long int var_7 = 857974663319517437ULL;
signed char var_13 = (signed char)38;
int zero = 0;
int var_16 = 2111229951;
unsigned short var_17 = (unsigned short)14404;
void init() {
}

void checksum() {
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
