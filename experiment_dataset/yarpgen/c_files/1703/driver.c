#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
unsigned int var_3 = 1643474730U;
short var_4 = (short)18873;
unsigned int var_5 = 966213137U;
signed char var_14 = (signed char)64;
int zero = 0;
long long int var_17 = -2448777231702504870LL;
long long int var_18 = -1868478462442837223LL;
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
