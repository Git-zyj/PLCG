#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2720933901U;
short var_5 = (short)30328;
unsigned short var_14 = (unsigned short)59785;
int zero = 0;
unsigned short var_15 = (unsigned short)51499;
unsigned int var_16 = 198567858U;
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
