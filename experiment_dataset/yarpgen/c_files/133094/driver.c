#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)47;
short var_8 = (short)-16591;
unsigned short var_13 = (unsigned short)6167;
long long int var_15 = -5619788450271293478LL;
short var_19 = (short)-8154;
int zero = 0;
unsigned int var_20 = 875084109U;
unsigned long long int var_21 = 1545347786991977491ULL;
unsigned char var_22 = (unsigned char)129;
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
