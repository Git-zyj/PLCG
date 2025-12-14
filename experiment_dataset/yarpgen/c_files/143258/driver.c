#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 584317573;
unsigned long long int var_11 = 1270528383342616180ULL;
signed char var_12 = (signed char)35;
int zero = 0;
int var_16 = 1941578915;
signed char var_17 = (signed char)103;
unsigned char var_18 = (unsigned char)53;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
