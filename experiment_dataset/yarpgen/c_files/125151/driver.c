#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7691607807116001445LL;
unsigned short var_3 = (unsigned short)7287;
unsigned short var_4 = (unsigned short)8164;
unsigned short var_6 = (unsigned short)38898;
short var_9 = (short)17029;
unsigned short var_12 = (unsigned short)25913;
int zero = 0;
unsigned short var_13 = (unsigned short)18524;
unsigned short var_14 = (unsigned short)57537;
short var_15 = (short)-32256;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
