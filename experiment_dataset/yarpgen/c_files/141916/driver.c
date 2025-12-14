#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3666993263192204718ULL;
unsigned short var_3 = (unsigned short)48082;
unsigned char var_6 = (unsigned char)253;
int var_7 = 517150736;
int zero = 0;
unsigned int var_13 = 2633987719U;
short var_14 = (short)27732;
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
