#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17814;
unsigned long long int var_5 = 7403394214232017073ULL;
unsigned short var_7 = (unsigned short)54818;
unsigned short var_12 = (unsigned short)25319;
int zero = 0;
unsigned short var_13 = (unsigned short)19958;
unsigned int var_14 = 1798007903U;
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
