#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned int var_1 = 1246731654U;
unsigned long long int var_3 = 9075039129579686022ULL;
short var_5 = (short)6303;
unsigned long long int var_15 = 9268288412658153329ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)25646;
signed char var_17 = (signed char)78;
unsigned int var_18 = 445093993U;
void init() {
}

void checksum() {
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
