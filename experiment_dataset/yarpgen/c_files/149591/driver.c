#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 124202637820477723LL;
unsigned short var_4 = (unsigned short)53020;
int var_5 = -1621965878;
unsigned int var_6 = 1806783320U;
short var_9 = (short)30586;
unsigned char var_10 = (unsigned char)238;
long long int var_12 = -4456226024974813291LL;
unsigned int var_13 = 575385801U;
int zero = 0;
unsigned long long int var_14 = 14725147931843989490ULL;
unsigned long long int var_15 = 2141607419137760809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
