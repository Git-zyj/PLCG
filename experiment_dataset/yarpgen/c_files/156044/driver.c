#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 13868469746137129892ULL;
short var_4 = (short)-6232;
unsigned long long int var_13 = 4367695702444500108ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)28487;
int var_15 = -546378317;
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
