#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2487318185U;
short var_6 = (short)6817;
unsigned short var_8 = (unsigned short)38885;
long long int var_10 = -1625948241955220416LL;
unsigned int var_11 = 2907555827U;
int zero = 0;
unsigned short var_17 = (unsigned short)1210;
unsigned char var_18 = (unsigned char)249;
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
