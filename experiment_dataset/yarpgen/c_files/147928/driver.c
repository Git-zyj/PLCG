#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -484246758;
unsigned long long int var_4 = 4703178388688428498ULL;
unsigned long long int var_8 = 14871042151534526443ULL;
unsigned short var_10 = (unsigned short)61033;
int zero = 0;
long long int var_13 = 3171935350108751933LL;
int var_14 = 1200029003;
void init() {
}

void checksum() {
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
