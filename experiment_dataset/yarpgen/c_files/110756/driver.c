#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20568;
short var_13 = (short)26589;
short var_14 = (short)-28386;
short var_15 = (short)9472;
int zero = 0;
short var_16 = (short)20506;
short var_17 = (short)-19692;
short var_18 = (short)31018;
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
