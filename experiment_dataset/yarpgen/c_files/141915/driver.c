#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
int var_7 = -1592288092;
int var_9 = -1119702137;
unsigned long long int var_13 = 10255527088510135179ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)29341;
unsigned int var_15 = 1717420585U;
signed char var_16 = (signed char)108;
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
