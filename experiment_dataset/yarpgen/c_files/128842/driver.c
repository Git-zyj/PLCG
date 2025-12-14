#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)19729;
short var_3 = (short)-3261;
short var_4 = (short)-9701;
short var_6 = (short)32734;
long long int var_12 = -842322570991920428LL;
int zero = 0;
unsigned short var_15 = (unsigned short)13362;
short var_16 = (short)8668;
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
