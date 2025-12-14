#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3007;
unsigned short var_2 = (unsigned short)8623;
unsigned short var_12 = (unsigned short)6285;
unsigned short var_13 = (unsigned short)54670;
int zero = 0;
unsigned short var_15 = (unsigned short)38412;
unsigned short var_16 = (unsigned short)38884;
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
