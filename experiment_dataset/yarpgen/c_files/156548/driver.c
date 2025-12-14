#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22183;
int var_4 = 1864805969;
unsigned int var_7 = 2284567020U;
int var_9 = -899108653;
unsigned int var_11 = 2451900282U;
int zero = 0;
short var_15 = (short)-15025;
short var_16 = (short)-26935;
short var_17 = (short)-27736;
void init() {
}

void checksum() {
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
