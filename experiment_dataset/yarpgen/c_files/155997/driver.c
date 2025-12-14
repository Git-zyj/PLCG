#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 529639176;
unsigned short var_3 = (unsigned short)32986;
unsigned long long int var_8 = 6155591418574927139ULL;
int zero = 0;
int var_18 = 1725943315;
unsigned int var_19 = 1637901321U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
