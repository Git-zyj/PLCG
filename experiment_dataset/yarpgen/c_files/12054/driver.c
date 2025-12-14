#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)17292;
unsigned long long int var_7 = 4692790573807604839ULL;
long long int var_9 = 6797608493747864357LL;
unsigned int var_12 = 1974957430U;
int zero = 0;
unsigned int var_15 = 514869000U;
signed char var_16 = (signed char)61;
unsigned short var_17 = (unsigned short)25442;
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
