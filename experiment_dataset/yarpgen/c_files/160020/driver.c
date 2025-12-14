#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1626233293U;
int var_2 = 1137119622;
unsigned char var_4 = (unsigned char)226;
unsigned char var_10 = (unsigned char)171;
short var_11 = (short)-23842;
int zero = 0;
unsigned int var_13 = 2276108653U;
unsigned long long int var_14 = 16538311341676077378ULL;
unsigned char var_15 = (unsigned char)228;
short var_16 = (short)-570;
unsigned int var_17 = 1431094731U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
