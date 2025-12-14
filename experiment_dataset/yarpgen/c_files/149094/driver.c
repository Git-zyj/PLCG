#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1854850090;
long long int var_12 = 3844265927848314990LL;
unsigned short var_16 = (unsigned short)51346;
int zero = 0;
unsigned long long int var_17 = 15417464558886287535ULL;
unsigned char var_18 = (unsigned char)61;
unsigned long long int var_19 = 5544892839287384846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
