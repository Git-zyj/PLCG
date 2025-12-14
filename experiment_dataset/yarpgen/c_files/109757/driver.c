#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16202565446147364434ULL;
unsigned short var_3 = (unsigned short)23793;
int var_4 = 1769623189;
unsigned short var_6 = (unsigned short)47342;
int zero = 0;
signed char var_15 = (signed char)38;
unsigned short var_16 = (unsigned short)51399;
long long int var_17 = 3297655661614145105LL;
void init() {
}

void checksum() {
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
