#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50179;
unsigned char var_5 = (unsigned char)189;
unsigned short var_7 = (unsigned short)45819;
unsigned short var_8 = (unsigned short)50147;
int zero = 0;
short var_15 = (short)3151;
short var_16 = (short)17601;
unsigned short var_17 = (unsigned short)25885;
unsigned char var_18 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
