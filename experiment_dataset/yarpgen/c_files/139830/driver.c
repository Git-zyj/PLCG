#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3432053500U;
unsigned short var_4 = (unsigned short)5830;
long long int var_5 = 8107600513882883926LL;
unsigned int var_12 = 2312296494U;
int var_15 = 1367911336;
int zero = 0;
unsigned int var_17 = 731404040U;
unsigned int var_18 = 611300090U;
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
