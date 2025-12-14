#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17232;
signed char var_7 = (signed char)-7;
int var_8 = 754546192;
unsigned long long int var_12 = 11963134475109598411ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)137;
short var_14 = (short)-25034;
unsigned int var_15 = 3196482185U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
