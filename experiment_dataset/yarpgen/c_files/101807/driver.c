#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)202;
int var_5 = 2097262096;
long long int var_6 = -8812554206384669599LL;
int var_12 = 154086565;
unsigned long long int var_16 = 2290719932592130532ULL;
int zero = 0;
int var_19 = -1451829943;
unsigned short var_20 = (unsigned short)25760;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
