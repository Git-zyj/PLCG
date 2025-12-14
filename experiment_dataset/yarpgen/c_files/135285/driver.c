#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10938;
short var_2 = (short)-30657;
_Bool var_10 = (_Bool)1;
long long int var_12 = 5578120155707614390LL;
int zero = 0;
unsigned long long int var_15 = 8923487561912134197ULL;
unsigned int var_16 = 1702970536U;
unsigned char var_17 = (unsigned char)24;
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
