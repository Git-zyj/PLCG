#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned long long int var_2 = 12409003520189508105ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 835502855U;
int zero = 0;
unsigned long long int var_11 = 2705675557039614748ULL;
unsigned int var_12 = 2061410721U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
