#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_6 = -4989326320159288169LL;
short var_7 = (short)1186;
int var_9 = -80492101;
short var_10 = (short)-14722;
int zero = 0;
short var_11 = (short)-14032;
unsigned int var_12 = 4243210664U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
