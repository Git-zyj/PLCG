#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1532338594U;
int var_3 = -455370084;
unsigned long long int var_8 = 3059561666178496485ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)29705;
signed char var_17 = (signed char)93;
void init() {
}

void checksum() {
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
