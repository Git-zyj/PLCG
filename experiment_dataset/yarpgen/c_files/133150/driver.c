#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54461;
signed char var_4 = (signed char)0;
unsigned int var_5 = 1359278099U;
int zero = 0;
long long int var_10 = -1565916803509919082LL;
long long int var_11 = -6126490325196171993LL;
unsigned long long int var_12 = 14425711475579387641ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
