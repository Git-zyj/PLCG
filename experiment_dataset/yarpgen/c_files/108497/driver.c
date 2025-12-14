#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 836732421U;
unsigned int var_7 = 1738709093U;
unsigned char var_14 = (unsigned char)152;
unsigned long long int var_16 = 12407267753943595664ULL;
short var_17 = (short)-19575;
unsigned char var_18 = (unsigned char)45;
int zero = 0;
long long int var_19 = -1018092334889521744LL;
unsigned char var_20 = (unsigned char)89;
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
