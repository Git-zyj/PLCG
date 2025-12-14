#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -63376224;
int var_12 = -986748617;
int zero = 0;
long long int var_14 = 508001342875560261LL;
short var_15 = (short)28353;
unsigned char var_16 = (unsigned char)45;
signed char var_17 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
