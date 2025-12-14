#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37555;
unsigned short var_3 = (unsigned short)26607;
long long int var_6 = -4400598846968365295LL;
long long int var_11 = -6253813632641518600LL;
long long int var_13 = -2532171023332299423LL;
int zero = 0;
unsigned long long int var_16 = 17415305155310259386ULL;
short var_17 = (short)-21439;
short var_18 = (short)-11474;
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
