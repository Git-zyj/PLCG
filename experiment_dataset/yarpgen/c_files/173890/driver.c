#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1828124747;
short var_4 = (short)24246;
short var_7 = (short)-14064;
int var_9 = 2087674344;
int zero = 0;
int var_11 = -373518016;
int var_12 = 1565458294;
int var_13 = 496829389;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
