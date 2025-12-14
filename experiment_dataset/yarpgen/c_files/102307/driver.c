#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1592604052;
unsigned char var_6 = (unsigned char)237;
unsigned char var_7 = (unsigned char)82;
short var_8 = (short)27012;
short var_10 = (short)-18096;
int zero = 0;
int var_12 = -1334414836;
int var_13 = 253766456;
signed char var_14 = (signed char)6;
short var_15 = (short)-30897;
unsigned char var_16 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
