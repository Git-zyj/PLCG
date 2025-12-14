#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)32868;
unsigned int var_12 = 702002086U;
int zero = 0;
unsigned short var_14 = (unsigned short)27657;
unsigned int var_15 = 364016239U;
int var_16 = -221664526;
unsigned short var_17 = (unsigned short)64269;
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
