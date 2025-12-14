#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29585;
long long int var_6 = 4725951527685128720LL;
signed char var_10 = (signed char)93;
int var_13 = 1252353200;
unsigned long long int var_14 = 4587051498781285591ULL;
int zero = 0;
signed char var_15 = (signed char)-86;
signed char var_16 = (signed char)116;
signed char var_17 = (signed char)-87;
void init() {
}

void checksum() {
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
