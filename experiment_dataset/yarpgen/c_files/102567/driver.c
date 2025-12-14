#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_11 = (unsigned short)14346;
unsigned short var_14 = (unsigned short)49191;
unsigned char var_15 = (unsigned char)85;
unsigned short var_17 = (unsigned short)14214;
int zero = 0;
unsigned long long int var_20 = 525572804060919308ULL;
unsigned short var_21 = (unsigned short)18614;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
