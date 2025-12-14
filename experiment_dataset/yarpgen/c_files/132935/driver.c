#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2002920363U;
int var_3 = -1311337220;
int var_4 = 917752457;
short var_8 = (short)-16572;
int zero = 0;
unsigned short var_13 = (unsigned short)2798;
unsigned char var_14 = (unsigned char)120;
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
