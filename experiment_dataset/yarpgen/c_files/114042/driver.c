#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1579;
int var_5 = -1144018539;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)194;
int var_8 = -1641699930;
unsigned int var_10 = 1804194012U;
int zero = 0;
unsigned int var_17 = 1701986455U;
unsigned int var_18 = 1098871463U;
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
