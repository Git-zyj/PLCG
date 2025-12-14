#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1739614044;
unsigned long long int var_6 = 12205017426818211406ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)33;
unsigned short var_17 = (unsigned short)46619;
int var_18 = 1027895339;
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
