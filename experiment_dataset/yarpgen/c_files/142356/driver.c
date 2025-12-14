#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8787176114202411126ULL;
int var_4 = 262405143;
unsigned long long int var_6 = 1845562130124979058ULL;
long long int var_10 = -2880706169884217189LL;
int zero = 0;
unsigned short var_11 = (unsigned short)24716;
unsigned int var_12 = 2942905209U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
