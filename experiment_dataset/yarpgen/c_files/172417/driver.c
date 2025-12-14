#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-22629;
_Bool var_12 = (_Bool)1;
short var_17 = (short)-978;
int zero = 0;
short var_18 = (short)-12568;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3901956233U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
