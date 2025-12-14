#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34414;
int var_6 = -660814718;
unsigned char var_7 = (unsigned char)173;
short var_10 = (short)22494;
int zero = 0;
unsigned long long int var_20 = 16442709863527981632ULL;
short var_21 = (short)-22246;
int var_22 = -1047564499;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
