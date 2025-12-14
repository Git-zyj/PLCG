#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4254;
short var_2 = (short)-12276;
unsigned short var_6 = (unsigned short)15028;
short var_7 = (short)-25553;
int zero = 0;
short var_11 = (short)-25401;
unsigned short var_12 = (unsigned short)52643;
unsigned short var_13 = (unsigned short)1078;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
