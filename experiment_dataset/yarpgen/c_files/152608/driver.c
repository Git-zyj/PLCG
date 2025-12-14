#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 328156187U;
unsigned int var_4 = 2943438800U;
unsigned char var_5 = (unsigned char)118;
unsigned int var_7 = 252451620U;
int zero = 0;
long long int var_10 = 8582543568834389006LL;
long long int var_11 = 4722165281998799663LL;
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
