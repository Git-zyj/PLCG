#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14408845833718580400ULL;
unsigned short var_10 = (unsigned short)10022;
long long int var_13 = -4569244223497591308LL;
short var_15 = (short)15251;
int zero = 0;
unsigned long long int var_16 = 3534959747584942115ULL;
int var_17 = -554363960;
void init() {
}

void checksum() {
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
