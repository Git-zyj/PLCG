#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)15559;
unsigned int var_16 = 2583849781U;
long long int var_17 = -6201023215237706896LL;
unsigned short var_19 = (unsigned short)35706;
int zero = 0;
unsigned int var_20 = 216014317U;
int var_21 = -503792519;
short var_22 = (short)-28108;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
