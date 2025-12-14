#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2057623261;
long long int var_3 = -6893057216933780732LL;
int var_4 = -341643391;
unsigned int var_6 = 1633340667U;
int zero = 0;
unsigned char var_10 = (unsigned char)74;
unsigned char var_11 = (unsigned char)167;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
