#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2091182882;
signed char var_1 = (signed char)-13;
unsigned long long int var_5 = 17128922668664381939ULL;
signed char var_9 = (signed char)-21;
int zero = 0;
signed char var_15 = (signed char)-119;
short var_16 = (short)-16813;
unsigned short var_17 = (unsigned short)53173;
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
