#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24113;
signed char var_1 = (signed char)-123;
int var_6 = 1964866033;
short var_7 = (short)7962;
unsigned long long int var_12 = 15937937733738841975ULL;
unsigned long long int var_16 = 6459101166261274427ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)2399;
long long int var_18 = 511390012642298081LL;
void init() {
}

void checksum() {
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
