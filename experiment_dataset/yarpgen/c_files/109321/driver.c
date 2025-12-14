#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)19447;
int var_4 = -1121137366;
int var_9 = -1458334509;
int var_10 = -1542821453;
unsigned char var_12 = (unsigned char)96;
int zero = 0;
long long int var_13 = -8562205747006059731LL;
unsigned char var_14 = (unsigned char)92;
void init() {
}

void checksum() {
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
