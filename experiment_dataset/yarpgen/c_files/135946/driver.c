#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 663029471;
long long int var_8 = 3741412920909432131LL;
short var_9 = (short)18784;
int var_12 = 1621230736;
long long int var_14 = 1121276177969959270LL;
int zero = 0;
unsigned short var_15 = (unsigned short)14496;
unsigned long long int var_16 = 14441808258716541577ULL;
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
