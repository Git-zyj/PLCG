#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19695;
unsigned int var_7 = 3646302160U;
int var_10 = 1026716000;
unsigned char var_12 = (unsigned char)74;
short var_14 = (short)9231;
signed char var_15 = (signed char)109;
int zero = 0;
unsigned short var_16 = (unsigned short)17760;
unsigned char var_17 = (unsigned char)89;
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
