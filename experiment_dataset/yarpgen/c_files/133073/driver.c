#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1707943691U;
short var_3 = (short)3917;
unsigned int var_4 = 3611039083U;
long long int var_8 = 6372931098566043611LL;
int zero = 0;
unsigned short var_14 = (unsigned short)32036;
long long int var_15 = 7995948770470609057LL;
long long int var_16 = -96118676089992238LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
