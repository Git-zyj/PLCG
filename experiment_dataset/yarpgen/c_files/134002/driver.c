#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4077356098U;
short var_2 = (short)-19384;
unsigned char var_5 = (unsigned char)29;
long long int var_7 = -3922359941292190006LL;
unsigned short var_14 = (unsigned short)61202;
int zero = 0;
unsigned int var_17 = 4017114644U;
unsigned int var_18 = 3765940009U;
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
