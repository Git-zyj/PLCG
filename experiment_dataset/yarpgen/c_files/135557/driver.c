#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 296006321U;
unsigned long long int var_3 = 9745927943423339536ULL;
int var_4 = -672066055;
unsigned short var_7 = (unsigned short)3020;
signed char var_8 = (signed char)-42;
short var_9 = (short)-8780;
int zero = 0;
int var_10 = -1685474288;
short var_11 = (short)-6304;
signed char var_12 = (signed char)-92;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
