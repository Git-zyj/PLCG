#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)69;
short var_2 = (short)-11426;
short var_4 = (short)-51;
short var_5 = (short)-4739;
unsigned char var_7 = (unsigned char)232;
short var_8 = (short)-11436;
short var_9 = (short)-11006;
unsigned short var_10 = (unsigned short)35050;
int zero = 0;
short var_16 = (short)-29248;
unsigned int var_17 = 3659609979U;
void init() {
}

void checksum() {
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
