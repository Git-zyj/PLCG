#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5837665530481371385ULL;
long long int var_2 = 2253077957013211446LL;
unsigned long long int var_3 = 14097739155918929763ULL;
unsigned int var_5 = 9269599U;
unsigned int var_7 = 3570564403U;
long long int var_9 = -675223628260514248LL;
int zero = 0;
unsigned char var_10 = (unsigned char)246;
unsigned long long int var_11 = 7318821596255392912ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
