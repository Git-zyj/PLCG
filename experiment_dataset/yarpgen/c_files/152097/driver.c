#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4011195307U;
unsigned short var_5 = (unsigned short)9938;
long long int var_13 = 3358519038844696264LL;
int zero = 0;
unsigned long long int var_16 = 15095922118189682635ULL;
unsigned long long int var_17 = 12481932971306201237ULL;
void init() {
}

void checksum() {
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
