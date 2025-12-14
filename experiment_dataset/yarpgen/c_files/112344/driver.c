#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -904802521;
unsigned int var_7 = 1963985799U;
signed char var_9 = (signed char)96;
int var_12 = 1785937444;
unsigned int var_16 = 3032854957U;
int zero = 0;
unsigned int var_17 = 1510397861U;
int var_18 = -1563442923;
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
