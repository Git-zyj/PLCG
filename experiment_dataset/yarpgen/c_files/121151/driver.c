#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3933953123U;
unsigned char var_2 = (unsigned char)27;
unsigned int var_4 = 4269393512U;
unsigned int var_5 = 280553831U;
int var_11 = 2128715169;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_14 = 1893751459;
unsigned long long int var_15 = 11179487695474765697ULL;
unsigned int var_16 = 1016086420U;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
