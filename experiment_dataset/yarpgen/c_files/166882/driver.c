#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1327782077;
unsigned long long int var_3 = 4139859674510947620ULL;
short var_8 = (short)-16999;
unsigned char var_11 = (unsigned char)87;
unsigned char var_12 = (unsigned char)144;
int zero = 0;
unsigned int var_15 = 1773505170U;
unsigned long long int var_16 = 1707148692424958762ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
