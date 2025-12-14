#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4034366460388881182LL;
unsigned int var_7 = 2629936808U;
int var_8 = -2095381931;
unsigned short var_12 = (unsigned short)22828;
long long int var_13 = -5149152913801009411LL;
int zero = 0;
unsigned int var_15 = 2090247U;
short var_16 = (short)8504;
unsigned char var_17 = (unsigned char)100;
unsigned char var_18 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
