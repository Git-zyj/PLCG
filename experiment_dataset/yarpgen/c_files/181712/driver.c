#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4372157522806411250LL;
unsigned short var_1 = (unsigned short)8534;
unsigned short var_4 = (unsigned short)41293;
unsigned short var_5 = (unsigned short)58851;
unsigned short var_6 = (unsigned short)27363;
unsigned short var_12 = (unsigned short)15191;
long long int var_13 = 2791605007761979690LL;
int zero = 0;
unsigned short var_14 = (unsigned short)48088;
int var_15 = -13404571;
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
