#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7086316344531106281ULL;
unsigned short var_5 = (unsigned short)54300;
short var_9 = (short)14425;
unsigned int var_10 = 3924242935U;
long long int var_11 = 6220803112843311740LL;
int zero = 0;
unsigned int var_12 = 3180701769U;
unsigned int var_13 = 2071800730U;
short var_14 = (short)-16743;
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
