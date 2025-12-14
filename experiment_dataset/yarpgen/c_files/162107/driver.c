#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)93;
unsigned char var_7 = (unsigned char)225;
unsigned int var_9 = 2433716025U;
int var_11 = 1639736627;
int zero = 0;
long long int var_12 = -1556175649328565174LL;
unsigned char var_13 = (unsigned char)232;
long long int var_14 = 3099100115663713254LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
