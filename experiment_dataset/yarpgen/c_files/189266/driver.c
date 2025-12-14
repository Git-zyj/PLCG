#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2078853913;
long long int var_5 = 8903861450971093288LL;
unsigned int var_6 = 1667683234U;
unsigned char var_7 = (unsigned char)204;
unsigned char var_9 = (unsigned char)232;
int zero = 0;
unsigned int var_11 = 1695513147U;
short var_12 = (short)-18682;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
