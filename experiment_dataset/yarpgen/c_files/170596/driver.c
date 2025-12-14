#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -779798309;
signed char var_1 = (signed char)-4;
signed char var_2 = (signed char)-104;
unsigned int var_3 = 1751027903U;
short var_7 = (short)3052;
unsigned int var_10 = 1233015400U;
short var_11 = (short)2713;
int zero = 0;
long long int var_15 = 2343115979561155882LL;
unsigned int var_16 = 3103900550U;
signed char var_17 = (signed char)-112;
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
