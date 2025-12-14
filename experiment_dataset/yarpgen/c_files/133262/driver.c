#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4661;
unsigned long long int var_3 = 11570565182633453127ULL;
short var_6 = (short)-10807;
int zero = 0;
unsigned char var_11 = (unsigned char)222;
short var_12 = (short)-18315;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
