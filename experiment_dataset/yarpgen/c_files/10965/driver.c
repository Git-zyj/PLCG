#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
unsigned int var_4 = 3412340719U;
unsigned int var_10 = 3695954096U;
unsigned short var_11 = (unsigned short)7935;
unsigned char var_15 = (unsigned char)187;
int zero = 0;
long long int var_17 = -1934603523925013665LL;
long long int var_18 = 5683455375446693583LL;
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
