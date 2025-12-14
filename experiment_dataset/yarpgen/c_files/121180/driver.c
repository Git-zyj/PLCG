#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1550618004;
int var_1 = -1723268857;
unsigned short var_5 = (unsigned short)51541;
signed char var_9 = (signed char)9;
int zero = 0;
int var_18 = 1616050338;
long long int var_19 = -2374057403136289612LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
