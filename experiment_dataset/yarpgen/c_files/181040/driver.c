#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7045646599391695378ULL;
unsigned long long int var_10 = 7052831737240563428ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)61;
unsigned long long int var_12 = 13557348382928731467ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
