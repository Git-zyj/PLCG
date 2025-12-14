#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)3;
signed char var_1 = (signed char)49;
unsigned long long int var_3 = 10216308207533898624ULL;
int var_4 = -390923457;
unsigned char var_7 = (unsigned char)210;
int zero = 0;
unsigned short var_15 = (unsigned short)52256;
unsigned int var_16 = 3952281135U;
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
