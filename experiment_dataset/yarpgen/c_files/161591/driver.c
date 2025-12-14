#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)24611;
int var_7 = -562657887;
short var_8 = (short)945;
int var_12 = -757363045;
int zero = 0;
unsigned long long int var_14 = 175709924118693496ULL;
unsigned short var_15 = (unsigned short)57714;
unsigned long long int var_16 = 16020567179386791004ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
