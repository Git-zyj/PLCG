#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3090573916U;
short var_6 = (short)-16568;
unsigned char var_8 = (unsigned char)116;
short var_11 = (short)-25767;
int zero = 0;
unsigned char var_13 = (unsigned char)232;
short var_14 = (short)14953;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
