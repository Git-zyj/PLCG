#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)15;
unsigned int var_8 = 1569916568U;
unsigned short var_9 = (unsigned short)33770;
unsigned int var_11 = 3658368156U;
long long int var_14 = -4338800369735352985LL;
int zero = 0;
unsigned int var_15 = 214247845U;
unsigned int var_16 = 1097299012U;
unsigned short var_17 = (unsigned short)52174;
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
