#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23049;
unsigned char var_12 = (unsigned char)130;
short var_14 = (short)24561;
unsigned short var_15 = (unsigned short)39527;
int zero = 0;
long long int var_17 = -7118910442747643504LL;
short var_18 = (short)-28948;
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
