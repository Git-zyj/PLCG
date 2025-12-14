#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)9;
unsigned short var_5 = (unsigned short)6201;
int var_6 = 1049922849;
int zero = 0;
unsigned char var_12 = (unsigned char)198;
short var_13 = (short)-19861;
short var_14 = (short)-4527;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
