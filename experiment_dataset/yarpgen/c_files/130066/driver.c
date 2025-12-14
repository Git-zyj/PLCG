#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_12 = (_Bool)0;
unsigned short var_18 = (unsigned short)21177;
unsigned char var_19 = (unsigned char)229;
int zero = 0;
short var_20 = (short)30210;
unsigned short var_21 = (unsigned short)46448;
unsigned char var_22 = (unsigned char)47;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
