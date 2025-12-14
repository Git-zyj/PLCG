#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2337745761U;
short var_1 = (short)-13304;
unsigned int var_4 = 3807536186U;
unsigned short var_9 = (unsigned short)46940;
unsigned int var_10 = 3397189323U;
unsigned short var_13 = (unsigned short)34293;
unsigned long long int var_15 = 114758833763870214ULL;
int zero = 0;
long long int var_16 = -94197206230356170LL;
unsigned short var_17 = (unsigned short)57057;
short var_18 = (short)30351;
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
