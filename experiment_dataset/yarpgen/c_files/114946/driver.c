#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13615;
unsigned short var_6 = (unsigned short)30936;
short var_10 = (short)-19179;
short var_12 = (short)30572;
int zero = 0;
unsigned short var_13 = (unsigned short)6414;
unsigned char var_14 = (unsigned char)168;
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
