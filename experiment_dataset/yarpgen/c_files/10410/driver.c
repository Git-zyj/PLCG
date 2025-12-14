#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2876707556U;
unsigned long long int var_2 = 600045016332809143ULL;
signed char var_4 = (signed char)-78;
short var_8 = (short)-31214;
int zero = 0;
unsigned char var_12 = (unsigned char)251;
unsigned int var_13 = 3632674535U;
int var_14 = 440362357;
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
