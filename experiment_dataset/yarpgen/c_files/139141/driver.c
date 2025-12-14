#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)175;
long long int var_4 = -8640383882833145371LL;
long long int var_5 = 8877257645954617207LL;
int var_12 = 251310291;
int zero = 0;
unsigned long long int var_18 = 9962734351480277565ULL;
short var_19 = (short)28541;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
