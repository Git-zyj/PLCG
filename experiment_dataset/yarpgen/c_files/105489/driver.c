#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)71;
long long int var_14 = 862922120368510679LL;
unsigned int var_15 = 4165453927U;
int zero = 0;
unsigned int var_20 = 2062828479U;
unsigned long long int var_21 = 6957259187758014744ULL;
short var_22 = (short)13104;
unsigned char var_23 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
