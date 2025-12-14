#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6191096108352809944LL;
unsigned int var_6 = 2927712904U;
short var_12 = (short)-13186;
unsigned int var_18 = 2873450672U;
int zero = 0;
unsigned long long int var_20 = 5745270600985669321ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)72;
int var_23 = -229145240;
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
