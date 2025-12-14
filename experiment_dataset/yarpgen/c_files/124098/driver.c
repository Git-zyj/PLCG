#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)223;
unsigned char var_9 = (unsigned char)33;
int var_10 = -956433885;
unsigned long long int var_12 = 8564642807285120444ULL;
long long int var_15 = 2430741616765230333LL;
short var_16 = (short)20592;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
int var_20 = 371283738;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
