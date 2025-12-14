#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24939;
unsigned short var_3 = (unsigned short)12590;
short var_8 = (short)14693;
short var_9 = (short)5300;
short var_16 = (short)-20961;
short var_17 = (short)8012;
int zero = 0;
short var_18 = (short)3129;
short var_19 = (short)-6915;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
