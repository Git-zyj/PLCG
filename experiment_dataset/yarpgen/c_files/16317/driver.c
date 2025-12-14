#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)5716;
unsigned char var_11 = (unsigned char)89;
int zero = 0;
long long int var_14 = 2145144370335997669LL;
short var_15 = (short)-29747;
short var_16 = (short)17681;
long long int var_17 = -8227109673887686483LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
