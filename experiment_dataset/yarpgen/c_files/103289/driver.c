#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)236;
unsigned long long int var_7 = 4863584232277133288ULL;
long long int var_10 = -7587651406139296432LL;
int zero = 0;
unsigned char var_14 = (unsigned char)126;
unsigned char var_15 = (unsigned char)166;
signed char var_16 = (signed char)96;
unsigned short var_17 = (unsigned short)52546;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
