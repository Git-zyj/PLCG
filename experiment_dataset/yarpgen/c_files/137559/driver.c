#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1416987905;
int var_7 = -842366601;
int var_10 = 926699595;
unsigned long long int var_11 = 7540207150326296226ULL;
int zero = 0;
short var_13 = (short)21187;
unsigned short var_14 = (unsigned short)30384;
void init() {
}

void checksum() {
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
