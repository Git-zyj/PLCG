#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 280465161U;
unsigned int var_3 = 4073590276U;
unsigned int var_12 = 513199775U;
int zero = 0;
unsigned char var_14 = (unsigned char)242;
_Bool var_15 = (_Bool)1;
int var_16 = -405049387;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
