#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_12 = 1658049580U;
long long int var_16 = -3172610130617011785LL;
unsigned int var_17 = 3324515920U;
int zero = 0;
int var_19 = 1318613350;
short var_20 = (short)28315;
unsigned int var_21 = 4045492075U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
