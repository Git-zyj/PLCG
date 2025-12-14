#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -8083899443243047111LL;
long long int var_9 = -5000592124996332447LL;
unsigned char var_10 = (unsigned char)147;
unsigned short var_15 = (unsigned short)3781;
int zero = 0;
unsigned char var_20 = (unsigned char)35;
unsigned int var_21 = 1057951992U;
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
