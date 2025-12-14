#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-18126;
short var_6 = (short)-6146;
short var_9 = (short)16107;
short var_10 = (short)9682;
int zero = 0;
short var_18 = (short)21025;
short var_19 = (short)-16653;
short var_20 = (short)-30182;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
