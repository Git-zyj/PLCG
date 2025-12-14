#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2726016307U;
unsigned int var_7 = 1775480080U;
signed char var_8 = (signed char)-1;
int zero = 0;
unsigned int var_12 = 1988373988U;
unsigned int var_13 = 4254517736U;
unsigned long long int var_14 = 3059017964896869684ULL;
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
