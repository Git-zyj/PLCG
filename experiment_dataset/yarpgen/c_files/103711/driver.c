#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_11 = (signed char)75;
long long int var_13 = 4514761678191352715LL;
unsigned int var_16 = 2959111939U;
int zero = 0;
unsigned long long int var_17 = 13451908198854838106ULL;
unsigned char var_18 = (unsigned char)183;
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
