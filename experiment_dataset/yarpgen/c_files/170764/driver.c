#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)33;
unsigned long long int var_1 = 3855162796615430482ULL;
short var_5 = (short)16951;
unsigned int var_6 = 1990926052U;
long long int var_7 = -4571964516790499937LL;
unsigned long long int var_8 = 13271251811044403870ULL;
short var_9 = (short)1922;
int zero = 0;
unsigned int var_11 = 3244847122U;
unsigned short var_12 = (unsigned short)16043;
unsigned int var_13 = 1311735254U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
