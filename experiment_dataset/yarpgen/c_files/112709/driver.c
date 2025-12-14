#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4353640748988743892LL;
unsigned short var_5 = (unsigned short)21308;
unsigned int var_7 = 350368275U;
unsigned int var_10 = 2433030478U;
int zero = 0;
long long int var_14 = 7843999006966525598LL;
short var_15 = (short)22534;
int var_16 = 1078698385;
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
