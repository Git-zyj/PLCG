#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1133193530;
unsigned short var_3 = (unsigned short)874;
unsigned char var_4 = (unsigned char)49;
long long int var_5 = -5190500057926292257LL;
int zero = 0;
unsigned long long int var_18 = 17227764528080263334ULL;
unsigned char var_19 = (unsigned char)75;
short var_20 = (short)13113;
unsigned long long int var_21 = 16191932513286093108ULL;
unsigned int var_22 = 1529848420U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
