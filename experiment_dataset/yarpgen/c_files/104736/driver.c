#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63125;
unsigned char var_3 = (unsigned char)246;
unsigned char var_7 = (unsigned char)96;
long long int var_8 = 694517957090681237LL;
int zero = 0;
unsigned short var_18 = (unsigned short)46839;
unsigned int var_19 = 3239839125U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
