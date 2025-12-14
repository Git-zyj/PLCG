#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)103;
short var_7 = (short)-18627;
unsigned int var_11 = 1079813921U;
short var_13 = (short)14745;
unsigned int var_14 = 4209162390U;
int zero = 0;
unsigned char var_16 = (unsigned char)58;
unsigned int var_17 = 1779096187U;
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
