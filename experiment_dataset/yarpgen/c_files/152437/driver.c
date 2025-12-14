#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58797;
unsigned char var_3 = (unsigned char)77;
int var_6 = -840387797;
unsigned int var_10 = 1757526338U;
long long int var_14 = -1791366453201949617LL;
int zero = 0;
unsigned int var_16 = 1361282880U;
signed char var_17 = (signed char)-88;
long long int var_18 = -9211617449003597812LL;
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
