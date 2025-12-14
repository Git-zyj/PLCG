#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)75;
short var_7 = (short)24368;
short var_9 = (short)-14064;
long long int var_13 = -328106471231242912LL;
int zero = 0;
long long int var_15 = -178367166559062915LL;
short var_16 = (short)1734;
unsigned char var_17 = (unsigned char)136;
unsigned long long int var_18 = 4972473112997396800ULL;
short var_19 = (short)15619;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
