#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1843632006U;
unsigned short var_4 = (unsigned short)45165;
unsigned short var_12 = (unsigned short)13855;
int zero = 0;
unsigned int var_14 = 2751404614U;
unsigned short var_15 = (unsigned short)33821;
int var_16 = -1326474461;
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
