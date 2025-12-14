#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -3036449595864294193LL;
long long int var_6 = -8271406552020811585LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7823841613157735068ULL;
signed char var_10 = (signed char)107;
int var_14 = 552896384;
int zero = 0;
unsigned char var_15 = (unsigned char)187;
short var_16 = (short)-25465;
long long int var_17 = 5827856896632343099LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
