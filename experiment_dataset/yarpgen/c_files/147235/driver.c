#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3099489998074240605ULL;
unsigned long long int var_2 = 585464083773302964ULL;
unsigned char var_7 = (unsigned char)175;
unsigned int var_13 = 1793370568U;
int zero = 0;
short var_16 = (short)-20265;
unsigned char var_17 = (unsigned char)105;
long long int var_18 = -7020117506247258782LL;
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
