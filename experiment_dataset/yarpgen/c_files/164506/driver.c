#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10179166677743786318ULL;
short var_2 = (short)-8186;
unsigned long long int var_5 = 11860060475896067917ULL;
unsigned short var_7 = (unsigned short)32295;
unsigned short var_9 = (unsigned short)46235;
int zero = 0;
unsigned short var_15 = (unsigned short)14680;
unsigned short var_16 = (unsigned short)53267;
unsigned short var_17 = (unsigned short)13152;
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
