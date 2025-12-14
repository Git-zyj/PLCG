#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2126543326136620848ULL;
signed char var_3 = (signed char)34;
signed char var_4 = (signed char)-95;
short var_6 = (short)-2663;
int var_11 = -85141308;
unsigned char var_14 = (unsigned char)73;
int zero = 0;
unsigned int var_15 = 3535826407U;
signed char var_16 = (signed char)-113;
void init() {
}

void checksum() {
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
