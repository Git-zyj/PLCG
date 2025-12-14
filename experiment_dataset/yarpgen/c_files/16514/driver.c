#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3087773169944744954ULL;
long long int var_12 = -571143746862793893LL;
unsigned short var_13 = (unsigned short)12044;
int zero = 0;
short var_16 = (short)-15498;
short var_17 = (short)-24897;
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
