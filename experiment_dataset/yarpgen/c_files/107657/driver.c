#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned int var_8 = 1315146718U;
unsigned short var_11 = (unsigned short)50347;
unsigned char var_12 = (unsigned char)215;
int zero = 0;
unsigned short var_14 = (unsigned short)33191;
unsigned long long int var_15 = 7730632841711038427ULL;
unsigned short var_16 = (unsigned short)28591;
long long int var_17 = 258298830605026814LL;
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
