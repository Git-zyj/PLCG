#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)157;
int var_12 = 596465716;
short var_13 = (short)19271;
short var_15 = (short)31800;
int zero = 0;
unsigned long long int var_20 = 9241902675673060586ULL;
unsigned int var_21 = 346508906U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
