#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
unsigned int var_3 = 2008683080U;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 14557648008590587637ULL;
short var_16 = (short)-31210;
long long int var_17 = -7125514955287926368LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
