#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2385827838U;
unsigned int var_8 = 3054781592U;
short var_17 = (short)-20393;
int zero = 0;
unsigned char var_20 = (unsigned char)202;
int var_21 = -1648019902;
long long int var_22 = -8798933222381121581LL;
void init() {
}

void checksum() {
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
