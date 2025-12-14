#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 2620914601U;
long long int var_14 = -1433283088094663380LL;
int zero = 0;
int var_17 = 1117402360;
signed char var_18 = (signed char)61;
unsigned short var_19 = (unsigned short)6510;
long long int var_20 = 2557448742603620769LL;
void init() {
}

void checksum() {
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
