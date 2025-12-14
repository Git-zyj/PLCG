#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29889;
unsigned int var_9 = 3477545899U;
int zero = 0;
unsigned int var_16 = 1700499425U;
short var_17 = (short)-21953;
unsigned char var_18 = (unsigned char)88;
unsigned int var_19 = 157706070U;
short var_20 = (short)8280;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
