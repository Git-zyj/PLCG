#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 496901908U;
int var_1 = 1145409245;
long long int var_3 = -716793234835321938LL;
unsigned char var_7 = (unsigned char)169;
unsigned char var_10 = (unsigned char)232;
signed char var_12 = (signed char)-46;
int zero = 0;
short var_14 = (short)1644;
int var_15 = -1015449383;
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
