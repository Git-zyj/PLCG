#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28045;
long long int var_10 = -7519436896867477973LL;
unsigned char var_17 = (unsigned char)112;
int zero = 0;
unsigned char var_19 = (unsigned char)129;
unsigned int var_20 = 3474150506U;
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
