#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22110;
signed char var_1 = (signed char)119;
int var_5 = 749198271;
short var_6 = (short)31710;
unsigned char var_7 = (unsigned char)233;
unsigned char var_9 = (unsigned char)163;
int zero = 0;
int var_14 = 2011399950;
unsigned int var_15 = 3335833175U;
unsigned char var_16 = (unsigned char)126;
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
