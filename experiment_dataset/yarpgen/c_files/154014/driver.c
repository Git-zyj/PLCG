#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1759567410;
short var_6 = (short)4313;
unsigned char var_10 = (unsigned char)121;
signed char var_11 = (signed char)-21;
int var_14 = -1468564745;
int zero = 0;
unsigned int var_16 = 4102727361U;
signed char var_17 = (signed char)-121;
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
