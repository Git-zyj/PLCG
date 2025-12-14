#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)206;
unsigned short var_11 = (unsigned short)18098;
short var_13 = (short)28030;
unsigned int var_16 = 3293326211U;
signed char var_19 = (signed char)73;
int zero = 0;
long long int var_20 = -1760782112180347714LL;
short var_21 = (short)-8840;
short var_22 = (short)21184;
short var_23 = (short)25496;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
