#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2110382451;
unsigned long long int var_6 = 7348439091326173412ULL;
short var_7 = (short)23227;
long long int var_9 = -219458858950968533LL;
short var_11 = (short)-18835;
int zero = 0;
signed char var_14 = (signed char)98;
unsigned char var_15 = (unsigned char)146;
short var_16 = (short)18396;
short var_17 = (short)-9741;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
