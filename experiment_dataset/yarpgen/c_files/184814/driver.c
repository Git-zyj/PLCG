#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1927765215819822548LL;
signed char var_7 = (signed char)-93;
unsigned char var_8 = (unsigned char)41;
int zero = 0;
unsigned long long int var_10 = 16382777144247668649ULL;
unsigned int var_11 = 1350448983U;
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
