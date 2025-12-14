#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5566183364257543755ULL;
short var_6 = (short)11621;
unsigned int var_10 = 206006101U;
unsigned char var_14 = (unsigned char)88;
int zero = 0;
unsigned long long int var_18 = 17360430629489090643ULL;
unsigned long long int var_19 = 10450489274671196579ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
