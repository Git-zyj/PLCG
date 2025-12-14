#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1746872361;
unsigned short var_4 = (unsigned short)48512;
long long int var_11 = -7496826815776070529LL;
int zero = 0;
unsigned char var_17 = (unsigned char)118;
unsigned short var_18 = (unsigned short)24707;
void init() {
}

void checksum() {
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
