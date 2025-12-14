#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1854;
unsigned short var_8 = (unsigned short)28491;
int var_13 = 1986325009;
unsigned int var_16 = 3159658128U;
long long int var_17 = 4589738491112848912LL;
int zero = 0;
unsigned short var_18 = (unsigned short)37277;
unsigned short var_19 = (unsigned short)47592;
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
