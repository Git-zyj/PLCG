#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 69762824;
int var_3 = 1040253689;
signed char var_5 = (signed char)44;
int var_8 = 1122011167;
int var_12 = 250554009;
int zero = 0;
unsigned int var_14 = 1960725274U;
int var_15 = 811462860;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
