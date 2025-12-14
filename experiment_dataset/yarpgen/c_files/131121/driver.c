#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)125;
unsigned short var_4 = (unsigned short)61127;
short var_10 = (short)-31220;
unsigned int var_11 = 2046391154U;
signed char var_13 = (signed char)81;
int zero = 0;
unsigned short var_14 = (unsigned short)64173;
long long int var_15 = 5701464822645637016LL;
unsigned int var_16 = 1881164841U;
short var_17 = (short)-21295;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
