#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)44266;
int var_7 = 2076311485;
unsigned int var_11 = 1744752641U;
int zero = 0;
unsigned short var_13 = (unsigned short)32469;
unsigned long long int var_14 = 13654722792578151865ULL;
unsigned int var_15 = 4142826846U;
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
