#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2784241167U;
unsigned int var_4 = 2363495664U;
long long int var_9 = -7679656102470069633LL;
int zero = 0;
signed char var_11 = (signed char)108;
unsigned long long int var_12 = 12697896552623056093ULL;
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
