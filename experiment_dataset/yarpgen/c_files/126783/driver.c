#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8353070837338898392LL;
unsigned short var_4 = (unsigned short)25829;
unsigned short var_12 = (unsigned short)62840;
short var_15 = (short)-29986;
int zero = 0;
unsigned char var_16 = (unsigned char)239;
unsigned short var_17 = (unsigned short)9321;
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
