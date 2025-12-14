#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
signed char var_10 = (signed char)96;
unsigned char var_12 = (unsigned char)210;
unsigned short var_13 = (unsigned short)52222;
int zero = 0;
unsigned char var_15 = (unsigned char)137;
signed char var_16 = (signed char)-3;
short var_17 = (short)-29325;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
