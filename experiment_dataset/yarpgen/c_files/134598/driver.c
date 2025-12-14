#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 17626019898470414304ULL;
unsigned int var_12 = 74596568U;
int var_13 = 1639979924;
unsigned short var_17 = (unsigned short)7881;
int zero = 0;
short var_18 = (short)25153;
unsigned char var_19 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
