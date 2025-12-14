#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
unsigned short var_10 = (unsigned short)51504;
unsigned long long int var_14 = 15411409519803111357ULL;
signed char var_16 = (signed char)-89;
int zero = 0;
unsigned short var_18 = (unsigned short)19721;
long long int var_19 = -4824702539590114390LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
