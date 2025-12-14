#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14601583953183250930ULL;
long long int var_7 = -3451187472837688341LL;
unsigned short var_8 = (unsigned short)42025;
unsigned long long int var_10 = 8805927269057661972ULL;
unsigned long long int var_11 = 7645939895571095757ULL;
signed char var_13 = (signed char)-6;
unsigned int var_14 = 2056212052U;
unsigned int var_17 = 4019418640U;
int zero = 0;
signed char var_19 = (signed char)56;
long long int var_20 = -4689873141755950193LL;
signed char var_21 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
