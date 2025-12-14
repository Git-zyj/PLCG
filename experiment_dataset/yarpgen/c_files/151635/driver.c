#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2515745711699289960LL;
unsigned char var_5 = (unsigned char)212;
long long int var_7 = 1740044887584776848LL;
unsigned char var_13 = (unsigned char)222;
int zero = 0;
signed char var_14 = (signed char)42;
int var_15 = -354465672;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
