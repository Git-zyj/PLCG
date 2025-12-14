#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53974;
short var_4 = (short)-18772;
unsigned int var_8 = 2407516908U;
unsigned int var_9 = 735296384U;
int zero = 0;
unsigned int var_14 = 4285343824U;
long long int var_15 = -5417325797870328463LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
