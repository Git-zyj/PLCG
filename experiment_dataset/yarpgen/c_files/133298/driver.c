#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -824352682;
_Bool var_6 = (_Bool)0;
unsigned int var_9 = 337024888U;
int zero = 0;
unsigned char var_14 = (unsigned char)164;
unsigned int var_15 = 1866733180U;
short var_16 = (short)-18206;
int var_17 = 1890161184;
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
