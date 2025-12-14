#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3236024260U;
unsigned short var_5 = (unsigned short)13863;
unsigned int var_6 = 2950569841U;
unsigned long long int var_11 = 8914920270197512919ULL;
unsigned int var_14 = 1786285372U;
int zero = 0;
unsigned short var_15 = (unsigned short)37306;
unsigned int var_16 = 2206132639U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
