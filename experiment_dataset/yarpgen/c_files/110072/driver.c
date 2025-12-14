#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8726640241749046306LL;
unsigned char var_4 = (unsigned char)189;
signed char var_10 = (signed char)-49;
unsigned int var_16 = 1967846713U;
int zero = 0;
unsigned char var_17 = (unsigned char)235;
unsigned long long int var_18 = 12284919339474276444ULL;
void init() {
}

void checksum() {
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
