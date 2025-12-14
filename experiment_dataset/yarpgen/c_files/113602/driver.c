#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1443481492U;
unsigned char var_7 = (unsigned char)107;
signed char var_10 = (signed char)-103;
signed char var_11 = (signed char)15;
int zero = 0;
short var_14 = (short)8882;
long long int var_15 = -3523054928469449839LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
