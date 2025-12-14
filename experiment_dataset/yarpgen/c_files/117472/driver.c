#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
long long int var_1 = 8413618806662479490LL;
unsigned short var_5 = (unsigned short)1627;
unsigned short var_7 = (unsigned short)1150;
int zero = 0;
short var_10 = (short)-3632;
unsigned int var_11 = 1036795351U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
