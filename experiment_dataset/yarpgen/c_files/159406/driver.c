#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1023495493;
unsigned int var_9 = 2047905602U;
unsigned short var_10 = (unsigned short)1567;
int zero = 0;
unsigned long long int var_13 = 2423027483838166124ULL;
int var_14 = 593991557;
unsigned long long int var_15 = 15408724793800014902ULL;
short var_16 = (short)-15811;
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
