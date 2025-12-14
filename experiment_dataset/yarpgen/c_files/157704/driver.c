#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)118;
unsigned int var_4 = 694355334U;
int var_6 = 358278847;
unsigned char var_10 = (unsigned char)19;
unsigned int var_11 = 4250398756U;
unsigned int var_12 = 595741556U;
int zero = 0;
unsigned int var_13 = 2254036635U;
unsigned char var_14 = (unsigned char)44;
int var_15 = 1903757009;
unsigned char var_16 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
