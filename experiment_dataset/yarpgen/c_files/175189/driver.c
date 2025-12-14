#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3184988569U;
unsigned long long int var_3 = 1791432273145819854ULL;
unsigned int var_4 = 3538456651U;
unsigned int var_11 = 3284702168U;
int zero = 0;
long long int var_13 = 3361760292424982145LL;
unsigned char var_14 = (unsigned char)16;
signed char var_15 = (signed char)-22;
int var_16 = 245477322;
unsigned int var_17 = 601895638U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
