#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)151;
int var_7 = -943575770;
unsigned short var_12 = (unsigned short)20511;
unsigned char var_15 = (unsigned char)236;
short var_19 = (short)19516;
int zero = 0;
short var_20 = (short)32712;
unsigned int var_21 = 2723812048U;
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
