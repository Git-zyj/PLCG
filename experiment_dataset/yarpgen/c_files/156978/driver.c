#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_8 = 13379080714627841924ULL;
unsigned long long int var_10 = 17873512473012422188ULL;
int var_13 = 1163405120;
int zero = 0;
signed char var_15 = (signed char)-9;
long long int var_16 = -1887118966735210052LL;
long long int var_17 = 1409542302820867444LL;
short var_18 = (short)-30768;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
