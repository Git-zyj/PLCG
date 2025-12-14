#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-15491;
unsigned short var_3 = (unsigned short)8822;
unsigned int var_13 = 3067697768U;
int zero = 0;
unsigned short var_15 = (unsigned short)55922;
unsigned int var_16 = 2028762740U;
unsigned long long int var_17 = 18377507498857310624ULL;
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
