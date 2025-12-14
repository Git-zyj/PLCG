#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16567906525406270455ULL;
unsigned long long int var_10 = 6237481267467480113ULL;
short var_12 = (short)30382;
int var_14 = -69664946;
int zero = 0;
unsigned long long int var_18 = 11138334175983431293ULL;
short var_19 = (short)-31476;
unsigned long long int var_20 = 766304447644557677ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
