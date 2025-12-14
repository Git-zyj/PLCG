#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
unsigned int var_4 = 3650917907U;
unsigned int var_7 = 745411192U;
unsigned char var_11 = (unsigned char)228;
unsigned char var_13 = (unsigned char)226;
unsigned char var_15 = (unsigned char)72;
int zero = 0;
unsigned long long int var_17 = 3421924562415749968ULL;
signed char var_18 = (signed char)-92;
unsigned char var_19 = (unsigned char)215;
unsigned long long int var_20 = 16347455555426756045ULL;
void init() {
}

void checksum() {
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
