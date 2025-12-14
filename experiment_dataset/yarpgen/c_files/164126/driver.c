#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)46112;
unsigned long long int var_3 = 14414318478509548020ULL;
unsigned char var_4 = (unsigned char)55;
unsigned long long int var_7 = 3672151492315787102ULL;
unsigned long long int var_9 = 10700118402873473561ULL;
unsigned char var_15 = (unsigned char)18;
int zero = 0;
unsigned char var_16 = (unsigned char)6;
int var_17 = -196140784;
long long int var_18 = -5013194095419677008LL;
void init() {
}

void checksum() {
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
