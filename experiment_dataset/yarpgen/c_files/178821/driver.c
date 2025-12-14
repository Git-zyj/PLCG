#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 3633915515081539583LL;
unsigned int var_13 = 2913860931U;
unsigned char var_16 = (unsigned char)44;
int zero = 0;
long long int var_20 = 3149575985693557726LL;
signed char var_21 = (signed char)35;
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
