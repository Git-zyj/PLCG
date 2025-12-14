#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31857;
short var_5 = (short)-10234;
signed char var_12 = (signed char)-107;
unsigned int var_16 = 2549790387U;
short var_17 = (short)25210;
int zero = 0;
short var_19 = (short)-10438;
unsigned int var_20 = 1718951536U;
void init() {
}

void checksum() {
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
