#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 1920517141742704583ULL;
short var_13 = (short)18410;
long long int var_15 = -4091464750331600728LL;
int zero = 0;
int var_16 = 1414654261;
unsigned long long int var_17 = 2029631472025726075ULL;
long long int var_18 = 37261757552903883LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
