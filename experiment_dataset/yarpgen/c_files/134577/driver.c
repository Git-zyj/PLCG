#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)160;
unsigned char var_9 = (unsigned char)203;
long long int var_10 = 6935069472657012932LL;
long long int var_13 = -7293422434975371515LL;
int zero = 0;
unsigned long long int var_17 = 14930687596202567857ULL;
int var_18 = 1945109388;
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
