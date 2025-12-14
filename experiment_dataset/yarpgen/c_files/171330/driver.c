#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3282336517402304937LL;
unsigned long long int var_1 = 11409758804423906488ULL;
unsigned long long int var_2 = 7566305596222322006ULL;
int var_10 = -315765860;
long long int var_13 = 8083781734215117382LL;
int zero = 0;
unsigned short var_16 = (unsigned short)34951;
_Bool var_17 = (_Bool)1;
short var_18 = (short)27674;
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
