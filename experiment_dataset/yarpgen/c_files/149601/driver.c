#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1081900237U;
short var_6 = (short)-12820;
int var_7 = 789807297;
long long int var_12 = 8768773406725964606LL;
int zero = 0;
unsigned long long int var_14 = 13745584432977117416ULL;
int var_15 = -1807455091;
unsigned long long int var_16 = 17302387741902552605ULL;
void init() {
}

void checksum() {
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
