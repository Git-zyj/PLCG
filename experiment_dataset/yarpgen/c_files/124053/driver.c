#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14450399010247659029ULL;
unsigned int var_4 = 421266627U;
unsigned char var_13 = (unsigned char)39;
int zero = 0;
unsigned long long int var_16 = 2925362137008098859ULL;
unsigned int var_17 = 2250889573U;
void init() {
}

void checksum() {
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
