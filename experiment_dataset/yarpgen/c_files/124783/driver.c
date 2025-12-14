#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1671351592U;
signed char var_8 = (signed char)(-127 - 1);
unsigned char var_11 = (unsigned char)4;
int zero = 0;
signed char var_13 = (signed char)-63;
signed char var_14 = (signed char)112;
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
