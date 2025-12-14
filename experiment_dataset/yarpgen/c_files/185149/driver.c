#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)34;
short var_4 = (short)-18071;
short var_7 = (short)-12760;
short var_10 = (short)-30902;
unsigned short var_12 = (unsigned short)18046;
int zero = 0;
short var_13 = (short)19031;
short var_14 = (short)10544;
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
