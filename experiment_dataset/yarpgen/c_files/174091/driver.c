#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1104249368U;
long long int var_7 = 1935028154017833198LL;
short var_12 = (short)12921;
int zero = 0;
long long int var_14 = 4668744640726976978LL;
unsigned long long int var_15 = 220206341095292757ULL;
long long int var_16 = -2128093857514329987LL;
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
