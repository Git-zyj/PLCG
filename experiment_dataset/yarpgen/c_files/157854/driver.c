#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)63665;
unsigned short var_6 = (unsigned short)17838;
long long int var_10 = -7836590401229397892LL;
int zero = 0;
unsigned short var_11 = (unsigned short)14171;
unsigned char var_12 = (unsigned char)73;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
