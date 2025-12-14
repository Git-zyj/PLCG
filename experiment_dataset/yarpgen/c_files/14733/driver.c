#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned char var_1 = (unsigned char)46;
unsigned char var_3 = (unsigned char)124;
signed char var_4 = (signed char)0;
signed char var_6 = (signed char)19;
unsigned short var_10 = (unsigned short)23300;
unsigned short var_11 = (unsigned short)61428;
int zero = 0;
unsigned short var_14 = (unsigned short)13276;
unsigned long long int var_15 = 16294363522245909084ULL;
unsigned char var_16 = (unsigned char)242;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
