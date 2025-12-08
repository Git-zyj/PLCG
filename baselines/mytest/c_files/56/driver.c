#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1258669885U;
signed char var_4 = (signed char)-106;
unsigned short var_7 = (unsigned short)42598;
unsigned int var_8 = 4263577460U;
int zero = 0;
signed char var_10 = (signed char)-124;
signed char var_11 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
