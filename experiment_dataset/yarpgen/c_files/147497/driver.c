#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4103660646U;
int var_7 = 1648288697;
unsigned int var_8 = 419492297U;
unsigned int var_11 = 3039463136U;
int var_13 = -2091990408;
unsigned short var_16 = (unsigned short)3300;
int zero = 0;
short var_17 = (short)-28935;
unsigned int var_18 = 371882328U;
unsigned char var_19 = (unsigned char)96;
unsigned int var_20 = 2513232744U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
