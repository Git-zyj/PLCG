#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-1483;
short var_8 = (short)2200;
unsigned int var_9 = 556941792U;
signed char var_10 = (signed char)51;
int zero = 0;
unsigned char var_14 = (unsigned char)183;
short var_15 = (short)-5303;
short var_16 = (short)29411;
void init() {
}

void checksum() {
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
