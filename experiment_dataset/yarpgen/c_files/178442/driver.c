#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)46893;
short var_5 = (short)18499;
unsigned char var_11 = (unsigned char)39;
short var_13 = (short)100;
int zero = 0;
unsigned char var_14 = (unsigned char)202;
unsigned char var_15 = (unsigned char)215;
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
