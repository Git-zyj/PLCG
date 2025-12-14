#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1925604245;
unsigned int var_4 = 3047568964U;
unsigned short var_11 = (unsigned short)33228;
int zero = 0;
unsigned long long int var_13 = 9510170284400372304ULL;
unsigned long long int var_14 = 15723598102921233549ULL;
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
