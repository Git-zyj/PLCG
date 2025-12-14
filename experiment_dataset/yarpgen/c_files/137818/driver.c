#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1340760924;
unsigned char var_5 = (unsigned char)2;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 1127221745U;
int zero = 0;
long long int var_12 = 266726756109502761LL;
unsigned int var_13 = 4244377816U;
unsigned char var_14 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
