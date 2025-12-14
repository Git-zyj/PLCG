#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5082160403490919058LL;
int var_13 = 2090312522;
unsigned short var_14 = (unsigned short)7701;
int zero = 0;
unsigned int var_16 = 2679242838U;
unsigned char var_17 = (unsigned char)188;
void init() {
}

void checksum() {
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
