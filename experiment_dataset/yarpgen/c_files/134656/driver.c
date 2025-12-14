#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2286097510149140775LL;
unsigned int var_3 = 3034244920U;
unsigned int var_5 = 1740758157U;
unsigned int var_7 = 3649028465U;
int var_11 = 1824713146;
int zero = 0;
unsigned char var_12 = (unsigned char)240;
unsigned char var_13 = (unsigned char)91;
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
