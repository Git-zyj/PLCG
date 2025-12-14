#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_12 = (unsigned short)8630;
short var_14 = (short)-4676;
unsigned char var_17 = (unsigned char)6;
int zero = 0;
signed char var_20 = (signed char)18;
unsigned short var_21 = (unsigned short)4268;
unsigned short var_22 = (unsigned short)3088;
short var_23 = (short)20233;
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
