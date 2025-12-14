#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3524946912U;
long long int var_8 = 9125656816615967158LL;
long long int var_10 = -5205116079982673170LL;
int zero = 0;
unsigned short var_15 = (unsigned short)3130;
short var_16 = (short)1752;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
