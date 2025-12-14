#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16454638260640921357ULL;
int var_4 = 1692194443;
unsigned short var_7 = (unsigned short)15505;
int zero = 0;
short var_15 = (short)-2066;
unsigned int var_16 = 973737030U;
unsigned int var_17 = 2393673155U;
short var_18 = (short)-15942;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
