#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)54;
unsigned short var_3 = (unsigned short)8969;
unsigned char var_6 = (unsigned char)58;
unsigned int var_7 = 3106581688U;
unsigned int var_11 = 3165430982U;
short var_13 = (short)14773;
unsigned long long int var_16 = 6779067877392469036ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)59532;
unsigned char var_18 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
