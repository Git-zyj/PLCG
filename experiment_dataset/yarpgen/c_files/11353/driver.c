#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -643644057;
unsigned long long int var_1 = 3867817457298331734ULL;
unsigned int var_5 = 1166310445U;
signed char var_7 = (signed char)-84;
short var_8 = (short)-16536;
unsigned short var_12 = (unsigned short)44958;
unsigned int var_14 = 3678103308U;
int zero = 0;
unsigned char var_15 = (unsigned char)127;
unsigned short var_16 = (unsigned short)29319;
short var_17 = (short)27321;
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
