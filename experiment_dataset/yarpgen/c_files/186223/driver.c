#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46894;
long long int var_4 = -3131544492633150516LL;
unsigned long long int var_7 = 14374708176253964923ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)63339;
unsigned long long int var_15 = 6097611995967728814ULL;
unsigned long long int var_16 = 9408559358498582348ULL;
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
