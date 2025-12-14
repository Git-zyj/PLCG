#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58807;
unsigned char var_5 = (unsigned char)165;
unsigned int var_7 = 2843770015U;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
short var_14 = (short)20851;
unsigned int var_15 = 3162598224U;
signed char var_16 = (signed char)-127;
unsigned char var_17 = (unsigned char)29;
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
