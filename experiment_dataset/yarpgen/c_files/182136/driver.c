#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2436973055U;
unsigned char var_4 = (unsigned char)153;
long long int var_8 = 9078098802505902241LL;
unsigned long long int var_11 = 1738467282890621951ULL;
int var_12 = 847846795;
int zero = 0;
unsigned short var_13 = (unsigned short)44771;
unsigned short var_14 = (unsigned short)62957;
short var_15 = (short)-844;
short var_16 = (short)7854;
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
