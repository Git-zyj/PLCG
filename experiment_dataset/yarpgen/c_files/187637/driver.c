#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 350477960998493313ULL;
unsigned int var_7 = 2826995412U;
short var_9 = (short)16239;
int var_10 = 310242903;
long long int var_12 = -7835357733454076629LL;
int zero = 0;
unsigned int var_13 = 1042485206U;
unsigned char var_14 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
