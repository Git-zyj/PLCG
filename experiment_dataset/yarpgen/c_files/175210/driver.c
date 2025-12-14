#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1929875401U;
short var_9 = (short)16102;
unsigned char var_10 = (unsigned char)93;
signed char var_12 = (signed char)-70;
int zero = 0;
unsigned char var_15 = (unsigned char)225;
short var_16 = (short)25593;
signed char var_17 = (signed char)-12;
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
