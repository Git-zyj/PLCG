#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned char var_1 = (unsigned char)66;
signed char var_8 = (signed char)-64;
int var_12 = -1560752477;
short var_15 = (short)-12777;
int zero = 0;
short var_17 = (short)-9873;
unsigned int var_18 = 3771059249U;
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
