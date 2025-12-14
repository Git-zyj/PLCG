#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 596671456;
unsigned char var_8 = (unsigned char)4;
unsigned int var_12 = 3023217327U;
int zero = 0;
unsigned int var_13 = 2527624830U;
unsigned int var_14 = 520097135U;
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
