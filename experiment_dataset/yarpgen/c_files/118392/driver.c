#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5826093851625078669LL;
unsigned long long int var_11 = 564294708605523250ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)152;
unsigned long long int var_15 = 15983526630416554001ULL;
long long int var_16 = 6900159999117189589LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
