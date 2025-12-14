#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2028351892;
unsigned long long int var_3 = 16181888216901386554ULL;
unsigned char var_10 = (unsigned char)55;
int zero = 0;
unsigned short var_14 = (unsigned short)61652;
unsigned short var_15 = (unsigned short)46938;
long long int var_16 = -5359489718924759936LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
