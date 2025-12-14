#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)26;
short var_6 = (short)29754;
int var_12 = -2090097323;
unsigned long long int var_18 = 2639272061007439588ULL;
int zero = 0;
unsigned int var_19 = 1516838756U;
unsigned char var_20 = (unsigned char)223;
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
