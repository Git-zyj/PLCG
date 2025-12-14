#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1751;
short var_8 = (short)-6791;
short var_9 = (short)-30199;
int zero = 0;
unsigned char var_16 = (unsigned char)249;
unsigned int var_17 = 4094097564U;
signed char var_18 = (signed char)-93;
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
