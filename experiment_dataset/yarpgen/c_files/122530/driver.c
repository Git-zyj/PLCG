#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)102;
unsigned int var_1 = 2944536401U;
long long int var_6 = 8564670081907737429LL;
unsigned short var_10 = (unsigned short)2419;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_13 = 3153206632U;
unsigned short var_14 = (unsigned short)14705;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
