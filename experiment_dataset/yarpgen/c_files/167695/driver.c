#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1630210485;
unsigned char var_5 = (unsigned char)13;
unsigned char var_6 = (unsigned char)236;
unsigned int var_8 = 1012250026U;
unsigned char var_12 = (unsigned char)176;
int zero = 0;
int var_13 = -382656209;
long long int var_14 = 6000044394356528628LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
