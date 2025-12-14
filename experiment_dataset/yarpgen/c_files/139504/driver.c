#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20660;
short var_3 = (short)-16251;
unsigned long long int var_5 = 10994722637417058237ULL;
unsigned int var_7 = 3303649955U;
int zero = 0;
unsigned long long int var_13 = 15469424766516014957ULL;
unsigned long long int var_14 = 2115017763465487794ULL;
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
