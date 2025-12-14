#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16904618446335565211ULL;
unsigned char var_2 = (unsigned char)105;
int zero = 0;
unsigned int var_12 = 3902523910U;
unsigned long long int var_13 = 2882206483712900973ULL;
unsigned long long int var_14 = 7281421531301122775ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
