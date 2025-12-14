#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1670627031U;
unsigned int var_6 = 1352223043U;
unsigned long long int var_11 = 18238976513502646216ULL;
int zero = 0;
unsigned int var_12 = 3294486492U;
unsigned long long int var_13 = 13680098256028030135ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
