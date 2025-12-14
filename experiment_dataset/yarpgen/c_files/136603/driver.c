#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 665137439U;
int var_8 = 1338443975;
short var_17 = (short)-19670;
int zero = 0;
unsigned int var_20 = 4060531491U;
short var_21 = (short)-15631;
unsigned long long int var_22 = 2473641890118920566ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
