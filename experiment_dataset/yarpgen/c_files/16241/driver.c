#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)75;
short var_6 = (short)2941;
int var_8 = 689588572;
int var_11 = -1050724061;
unsigned char var_13 = (unsigned char)184;
int zero = 0;
unsigned int var_20 = 1296608227U;
int var_21 = 1921626170;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
