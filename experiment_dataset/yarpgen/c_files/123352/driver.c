#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8034470969705785434ULL;
unsigned int var_5 = 93811643U;
int zero = 0;
unsigned int var_14 = 186774552U;
short var_15 = (short)8919;
unsigned int var_16 = 2355169213U;
unsigned int var_17 = 1374463540U;
long long int var_18 = 5335851990843241263LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
