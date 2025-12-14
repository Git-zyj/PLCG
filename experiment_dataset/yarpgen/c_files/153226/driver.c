#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16682;
short var_1 = (short)-11778;
signed char var_8 = (signed char)93;
signed char var_13 = (signed char)-16;
int zero = 0;
signed char var_15 = (signed char)67;
long long int var_16 = 8724157164047888659LL;
void init() {
}

void checksum() {
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
