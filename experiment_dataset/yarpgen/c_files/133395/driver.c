#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
unsigned short var_3 = (unsigned short)55534;
long long int var_11 = 6440446020242257924LL;
unsigned int var_13 = 1912279119U;
unsigned char var_15 = (unsigned char)88;
int zero = 0;
unsigned int var_16 = 2894419869U;
short var_17 = (short)-45;
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
