#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2312698064344660371LL;
unsigned char var_15 = (unsigned char)152;
int zero = 0;
short var_20 = (short)16268;
unsigned long long int var_21 = 10141357637302012202ULL;
long long int var_22 = -8040082594899868384LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
