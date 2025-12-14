#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_6 = 506161240U;
short var_7 = (short)-9133;
unsigned int var_11 = 4209750118U;
short var_12 = (short)-3628;
int zero = 0;
unsigned char var_15 = (unsigned char)248;
unsigned char var_16 = (unsigned char)5;
unsigned int var_17 = 1545288638U;
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
