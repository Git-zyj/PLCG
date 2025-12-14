#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2076564970;
unsigned int var_2 = 2871762728U;
signed char var_5 = (signed char)-6;
int var_6 = -1006747002;
unsigned short var_14 = (unsigned short)20911;
int zero = 0;
unsigned short var_15 = (unsigned short)5991;
unsigned int var_16 = 1480488825U;
int var_17 = -711133598;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
