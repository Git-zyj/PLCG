#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
short var_1 = (short)-2337;
unsigned int var_3 = 1529176874U;
signed char var_6 = (signed char)75;
unsigned short var_7 = (unsigned short)59040;
unsigned int var_8 = 3012129596U;
unsigned int var_10 = 2051423594U;
int zero = 0;
unsigned char var_12 = (unsigned char)144;
short var_13 = (short)25723;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
