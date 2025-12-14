#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31687;
unsigned long long int var_4 = 314031354628637032ULL;
unsigned long long int var_6 = 14218623802311991425ULL;
int var_8 = 459388621;
int var_9 = 330510531;
unsigned int var_10 = 4001175739U;
unsigned long long int var_12 = 3185010825845055991ULL;
int zero = 0;
int var_16 = -459903232;
int var_17 = -1925391688;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
