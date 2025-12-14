#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 620238987U;
unsigned int var_5 = 565199718U;
unsigned char var_7 = (unsigned char)229;
unsigned short var_11 = (unsigned short)6953;
long long int var_13 = 8823631580969481106LL;
unsigned short var_14 = (unsigned short)50634;
int zero = 0;
long long int var_15 = -7232425372977358934LL;
signed char var_16 = (signed char)-9;
long long int var_17 = 8279863555666016014LL;
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
