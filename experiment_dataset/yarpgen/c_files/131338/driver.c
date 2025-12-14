#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)67;
unsigned short var_6 = (unsigned short)52033;
short var_11 = (short)-21585;
unsigned short var_12 = (unsigned short)16813;
unsigned int var_13 = 2837072731U;
short var_14 = (short)3055;
int zero = 0;
unsigned char var_16 = (unsigned char)185;
long long int var_17 = -5495986029768759524LL;
void init() {
}

void checksum() {
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
