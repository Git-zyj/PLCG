#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)84;
short var_7 = (short)-25752;
unsigned short var_12 = (unsigned short)54972;
short var_13 = (short)2835;
int zero = 0;
unsigned int var_17 = 3182763776U;
long long int var_18 = 2675826164634226246LL;
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
