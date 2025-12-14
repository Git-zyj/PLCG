#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -2160881700028286261LL;
unsigned long long int var_10 = 11370670121135979673ULL;
int zero = 0;
short var_12 = (short)7020;
unsigned short var_13 = (unsigned short)13743;
int var_14 = 650305347;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
