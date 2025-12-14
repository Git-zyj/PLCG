#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22542;
unsigned char var_6 = (unsigned char)126;
short var_7 = (short)-15575;
short var_8 = (short)21826;
unsigned int var_9 = 3894551660U;
int zero = 0;
int var_13 = -373492903;
unsigned char var_14 = (unsigned char)243;
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
