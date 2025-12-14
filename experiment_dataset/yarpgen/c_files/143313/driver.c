#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)179;
unsigned long long int var_6 = 8066086320060872984ULL;
unsigned char var_8 = (unsigned char)221;
int var_9 = -1764886176;
signed char var_10 = (signed char)108;
int zero = 0;
unsigned short var_11 = (unsigned short)30695;
short var_12 = (short)9598;
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
