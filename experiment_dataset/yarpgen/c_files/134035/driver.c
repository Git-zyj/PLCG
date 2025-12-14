#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19084;
signed char var_1 = (signed char)69;
unsigned long long int var_4 = 3262716934722672442ULL;
short var_7 = (short)-29535;
unsigned short var_9 = (unsigned short)1932;
int zero = 0;
short var_14 = (short)5932;
unsigned long long int var_15 = 14904349211228590244ULL;
int var_16 = -1775852778;
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
