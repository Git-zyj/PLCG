#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7366604497984069160ULL;
unsigned int var_8 = 3892981472U;
int zero = 0;
signed char var_12 = (signed char)-6;
unsigned long long int var_13 = 1688561777423468955ULL;
int var_14 = -343436245;
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
