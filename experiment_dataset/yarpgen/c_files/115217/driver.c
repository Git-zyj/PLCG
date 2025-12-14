#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-894;
unsigned char var_1 = (unsigned char)52;
unsigned char var_3 = (unsigned char)77;
short var_5 = (short)23469;
short var_6 = (short)-14454;
short var_11 = (short)-16316;
unsigned char var_14 = (unsigned char)219;
int zero = 0;
unsigned char var_16 = (unsigned char)102;
unsigned char var_17 = (unsigned char)153;
unsigned short var_18 = (unsigned short)58974;
short var_19 = (short)-30697;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
