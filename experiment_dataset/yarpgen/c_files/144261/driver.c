#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -2600721021711847057LL;
unsigned long long int var_9 = 14891167243870388432ULL;
unsigned short var_13 = (unsigned short)65175;
int zero = 0;
short var_15 = (short)21551;
unsigned int var_16 = 1966844294U;
void init() {
}

void checksum() {
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
