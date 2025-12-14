#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61161;
unsigned char var_8 = (unsigned char)144;
signed char var_11 = (signed char)69;
short var_13 = (short)20898;
int zero = 0;
long long int var_15 = -8900886910324373218LL;
long long int var_16 = 8563593581817701401LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
