#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4145091700U;
short var_4 = (short)13234;
int var_12 = 1676883851;
unsigned short var_14 = (unsigned short)47119;
int zero = 0;
unsigned char var_15 = (unsigned char)93;
unsigned short var_16 = (unsigned short)45804;
void init() {
}

void checksum() {
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
