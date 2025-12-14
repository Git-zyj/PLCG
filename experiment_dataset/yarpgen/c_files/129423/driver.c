#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)2;
unsigned long long int var_9 = 10018770069742980433ULL;
unsigned long long int var_14 = 6252173968278651740ULL;
int zero = 0;
long long int var_15 = 4690190444454097602LL;
long long int var_16 = -5957092494823856893LL;
unsigned int var_17 = 25956083U;
void init() {
}

void checksum() {
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
