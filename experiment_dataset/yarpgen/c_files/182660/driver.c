#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)62;
short var_8 = (short)8328;
unsigned long long int var_15 = 17961124194301877535ULL;
int zero = 0;
long long int var_17 = 1981295128182389329LL;
int var_18 = 2085045278;
short var_19 = (short)1647;
unsigned long long int var_20 = 2271262544829071765ULL;
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
