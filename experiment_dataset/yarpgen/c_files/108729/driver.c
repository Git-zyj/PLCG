#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6202002734526985684LL;
unsigned char var_3 = (unsigned char)97;
unsigned int var_8 = 1807289405U;
unsigned long long int var_11 = 13790324391213114831ULL;
int var_12 = 1248078434;
unsigned short var_13 = (unsigned short)49400;
int zero = 0;
int var_20 = 1108077609;
unsigned long long int var_21 = 12604625548879971439ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
