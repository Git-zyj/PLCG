#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3888259160U;
short var_7 = (short)-26794;
unsigned char var_8 = (unsigned char)112;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
unsigned short var_16 = (unsigned short)60494;
unsigned int var_17 = 1670323635U;
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
