#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 647551559;
long long int var_1 = 5294614107994002050LL;
unsigned char var_3 = (unsigned char)176;
long long int var_5 = 4734830724007611214LL;
unsigned short var_8 = (unsigned short)8321;
unsigned long long int var_11 = 14174190839403612342ULL;
int zero = 0;
long long int var_15 = -7075390712076013298LL;
long long int var_16 = 6852417607689211363LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
