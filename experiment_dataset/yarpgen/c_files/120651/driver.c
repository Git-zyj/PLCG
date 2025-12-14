#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1711780958;
unsigned long long int var_4 = 12404106218897813381ULL;
long long int var_10 = -2598793067447956395LL;
unsigned short var_17 = (unsigned short)31853;
int zero = 0;
short var_20 = (short)-13232;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
