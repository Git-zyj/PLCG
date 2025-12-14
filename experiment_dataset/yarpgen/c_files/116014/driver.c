#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 2894867074118005856ULL;
short var_13 = (short)-32553;
long long int var_15 = 5863317312070045157LL;
int zero = 0;
long long int var_16 = 1746805140045920191LL;
unsigned int var_17 = 4052611788U;
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
