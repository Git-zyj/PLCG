#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
signed char var_2 = (signed char)74;
unsigned long long int var_4 = 1538909067626465793ULL;
unsigned long long int var_6 = 4753009393081183690ULL;
int zero = 0;
int var_12 = -1703428362;
unsigned int var_13 = 3613154158U;
unsigned int var_14 = 1359793240U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
