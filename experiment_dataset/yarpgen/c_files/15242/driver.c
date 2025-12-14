#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)1030;
int var_5 = -5022863;
unsigned char var_10 = (unsigned char)63;
unsigned short var_11 = (unsigned short)34314;
unsigned short var_12 = (unsigned short)49309;
int zero = 0;
unsigned char var_13 = (unsigned char)151;
unsigned short var_14 = (unsigned short)33571;
int var_15 = -1966838717;
unsigned char var_16 = (unsigned char)238;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
