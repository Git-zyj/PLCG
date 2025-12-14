#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23358;
unsigned int var_3 = 2903141251U;
unsigned long long int var_9 = 8357360880164450072ULL;
unsigned char var_10 = (unsigned char)135;
unsigned int var_16 = 2226964677U;
int zero = 0;
unsigned long long int var_19 = 11521107861617095183ULL;
short var_20 = (short)-22258;
unsigned int var_21 = 1232795461U;
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
