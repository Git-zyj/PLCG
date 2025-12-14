#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)15468;
signed char var_10 = (signed char)-63;
int var_12 = -664429972;
unsigned int var_13 = 485172322U;
int zero = 0;
int var_14 = -1155940475;
long long int var_15 = 2185977707037131248LL;
unsigned int var_16 = 1272048266U;
signed char var_17 = (signed char)67;
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
