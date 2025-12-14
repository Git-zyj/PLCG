#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6070561470908122608LL;
unsigned char var_9 = (unsigned char)255;
unsigned long long int var_15 = 3326453678588607071ULL;
int zero = 0;
short var_16 = (short)-13796;
short var_17 = (short)13706;
unsigned short var_18 = (unsigned short)46839;
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
