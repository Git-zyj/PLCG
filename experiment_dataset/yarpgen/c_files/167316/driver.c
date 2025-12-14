#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2088598710U;
unsigned long long int var_6 = 1426096636693906489ULL;
unsigned long long int var_13 = 3871328668921128189ULL;
short var_15 = (short)-30610;
int zero = 0;
unsigned char var_18 = (unsigned char)153;
short var_19 = (short)-30589;
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
