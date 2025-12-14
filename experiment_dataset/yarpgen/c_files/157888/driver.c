#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5743;
short var_4 = (short)26657;
unsigned int var_6 = 3739436835U;
unsigned long long int var_12 = 2631302907091068097ULL;
unsigned long long int var_14 = 12449219056354931102ULL;
int zero = 0;
unsigned long long int var_18 = 1840450973372250545ULL;
short var_19 = (short)-3932;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
