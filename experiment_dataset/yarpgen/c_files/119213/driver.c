#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
unsigned long long int var_2 = 18143844777653387679ULL;
int var_6 = 1931379640;
unsigned short var_7 = (unsigned short)36672;
unsigned long long int var_8 = 13250033791663350167ULL;
unsigned short var_10 = (unsigned short)60712;
signed char var_14 = (signed char)-22;
int zero = 0;
unsigned char var_16 = (unsigned char)104;
signed char var_17 = (signed char)54;
unsigned long long int var_18 = 2025578625978386614ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
