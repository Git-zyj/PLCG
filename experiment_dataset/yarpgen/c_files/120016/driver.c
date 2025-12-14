#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9521325153586048145ULL;
unsigned short var_7 = (unsigned short)37473;
long long int var_15 = -8722772526078735486LL;
int zero = 0;
int var_16 = 885822724;
int var_17 = -1093986497;
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
