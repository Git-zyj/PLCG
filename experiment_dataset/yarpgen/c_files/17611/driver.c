#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 931695874U;
long long int var_1 = 8617171875577649081LL;
short var_5 = (short)16560;
long long int var_10 = 1404286419602581198LL;
int zero = 0;
short var_20 = (short)-16010;
unsigned short var_21 = (unsigned short)20201;
short var_22 = (short)-10998;
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
