#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)83;
short var_8 = (short)30186;
unsigned char var_10 = (unsigned char)78;
unsigned short var_11 = (unsigned short)49047;
unsigned short var_13 = (unsigned short)18687;
int var_14 = -183475998;
signed char var_15 = (signed char)-64;
int zero = 0;
unsigned char var_19 = (unsigned char)14;
short var_20 = (short)12402;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
