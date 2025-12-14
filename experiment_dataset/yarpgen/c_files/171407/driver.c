#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2270935576478609355LL;
long long int var_10 = 487257787956479022LL;
int var_11 = 529761971;
short var_13 = (short)-30271;
unsigned char var_15 = (unsigned char)94;
int zero = 0;
signed char var_16 = (signed char)-94;
short var_17 = (short)-16054;
void init() {
}

void checksum() {
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
