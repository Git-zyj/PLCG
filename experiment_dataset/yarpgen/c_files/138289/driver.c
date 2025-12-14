#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6387769655954300283ULL;
unsigned char var_5 = (unsigned char)122;
long long int var_6 = 5472948563141007385LL;
int zero = 0;
signed char var_10 = (signed char)-63;
unsigned short var_11 = (unsigned short)51742;
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
