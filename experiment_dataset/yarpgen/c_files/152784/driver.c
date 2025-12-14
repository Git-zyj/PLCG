#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 802811025;
unsigned short var_7 = (unsigned short)20721;
unsigned int var_8 = 899005865U;
unsigned char var_9 = (unsigned char)241;
int var_10 = -542378704;
signed char var_14 = (signed char)120;
int zero = 0;
unsigned char var_15 = (unsigned char)24;
long long int var_16 = -8817041216904982100LL;
unsigned char var_17 = (unsigned char)142;
void init() {
}

void checksum() {
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
