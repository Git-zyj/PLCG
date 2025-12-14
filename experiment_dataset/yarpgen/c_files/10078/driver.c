#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -239080467;
unsigned long long int var_6 = 7181867258384870738ULL;
unsigned long long int var_8 = 4758200865781311677ULL;
unsigned int var_12 = 3898331440U;
int zero = 0;
unsigned char var_13 = (unsigned char)150;
int var_14 = -963848302;
void init() {
}

void checksum() {
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
