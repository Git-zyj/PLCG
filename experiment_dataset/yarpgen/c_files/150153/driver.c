#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)165;
long long int var_9 = 7048877885266836224LL;
unsigned int var_13 = 2760758155U;
int zero = 0;
short var_16 = (short)-4944;
unsigned long long int var_17 = 12396668086633267679ULL;
short var_18 = (short)-1742;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
