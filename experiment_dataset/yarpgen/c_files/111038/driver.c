#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)12212;
short var_6 = (short)-8882;
short var_11 = (short)-19909;
long long int var_12 = -8082931454579443690LL;
unsigned long long int var_14 = 17207689848318875101ULL;
int zero = 0;
signed char var_17 = (signed char)17;
long long int var_18 = 1803954466558176192LL;
void init() {
}

void checksum() {
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
