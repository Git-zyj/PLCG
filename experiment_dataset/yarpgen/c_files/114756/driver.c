#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)40606;
unsigned short var_4 = (unsigned short)31534;
signed char var_9 = (signed char)-110;
unsigned short var_11 = (unsigned short)53870;
short var_12 = (short)-27215;
long long int var_13 = -374341160175484797LL;
int zero = 0;
unsigned short var_16 = (unsigned short)7931;
short var_17 = (short)-19253;
unsigned int var_18 = 288079036U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
