#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4629920262403195927LL;
_Bool var_8 = (_Bool)0;
int var_10 = 700582682;
unsigned int var_12 = 3005041410U;
unsigned long long int var_16 = 615495568042424786ULL;
unsigned int var_17 = 615221564U;
int var_18 = -1868752267;
int zero = 0;
short var_20 = (short)8105;
unsigned char var_21 = (unsigned char)61;
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
