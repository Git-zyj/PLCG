#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6376982023157880919ULL;
unsigned char var_4 = (unsigned char)77;
unsigned char var_7 = (unsigned char)57;
unsigned char var_9 = (unsigned char)157;
unsigned char var_10 = (unsigned char)202;
short var_14 = (short)-14653;
int zero = 0;
unsigned char var_15 = (unsigned char)144;
long long int var_16 = -368441134896025068LL;
unsigned char var_17 = (unsigned char)149;
int var_18 = -2142437261;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
