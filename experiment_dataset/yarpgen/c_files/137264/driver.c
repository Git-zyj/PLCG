#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)21056;
int var_14 = -1863249589;
signed char var_16 = (signed char)17;
int zero = 0;
unsigned short var_17 = (unsigned short)12736;
short var_18 = (short)-14171;
unsigned short var_19 = (unsigned short)64732;
unsigned long long int var_20 = 7318591046211944355ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
