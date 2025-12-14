#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 526138125;
unsigned short var_10 = (unsigned short)54788;
int var_11 = -471692427;
int zero = 0;
signed char var_12 = (signed char)100;
signed char var_13 = (signed char)-47;
int var_14 = 882699498;
short var_15 = (short)-28528;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
