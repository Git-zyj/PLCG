#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -170265935;
unsigned long long int var_6 = 16885335825169134431ULL;
unsigned short var_7 = (unsigned short)42366;
int zero = 0;
unsigned int var_15 = 9989532U;
unsigned char var_16 = (unsigned char)222;
short var_17 = (short)6419;
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
