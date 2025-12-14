#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1797260368;
signed char var_10 = (signed char)-96;
unsigned short var_13 = (unsigned short)56155;
signed char var_16 = (signed char)-95;
int zero = 0;
int var_17 = 1053984549;
unsigned short var_18 = (unsigned short)48329;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
