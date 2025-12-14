#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)53;
unsigned char var_3 = (unsigned char)107;
signed char var_12 = (signed char)-62;
int zero = 0;
int var_14 = 1359240079;
unsigned int var_15 = 2789754110U;
int var_16 = -954079583;
int var_17 = -2000923258;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
