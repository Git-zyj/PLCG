#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)19237;
int var_9 = -1353925948;
unsigned char var_12 = (unsigned char)24;
int zero = 0;
int var_14 = -1906226820;
unsigned char var_15 = (unsigned char)76;
short var_16 = (short)31427;
unsigned long long int var_17 = 3044050868969800912ULL;
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
