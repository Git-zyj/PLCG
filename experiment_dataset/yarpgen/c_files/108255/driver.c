#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1490426331U;
unsigned int var_4 = 1640176182U;
unsigned int var_6 = 1689832542U;
unsigned int var_8 = 2874608894U;
int zero = 0;
unsigned int var_16 = 1436177568U;
unsigned int var_17 = 387298715U;
unsigned int var_18 = 2679433485U;
unsigned int var_19 = 2668230243U;
unsigned int var_20 = 1954817698U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
