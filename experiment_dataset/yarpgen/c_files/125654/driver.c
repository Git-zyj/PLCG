#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64376;
long long int var_6 = 3564830525357096118LL;
long long int var_7 = 6782434073373437034LL;
unsigned short var_8 = (unsigned short)15339;
short var_11 = (short)-9216;
long long int var_12 = 1358728427654836557LL;
int zero = 0;
unsigned short var_15 = (unsigned short)1344;
unsigned char var_16 = (unsigned char)13;
unsigned short var_17 = (unsigned short)63016;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
