#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1297107583U;
unsigned int var_2 = 964691874U;
unsigned int var_10 = 3132498003U;
unsigned int var_11 = 2607758259U;
unsigned int var_12 = 1796739702U;
int zero = 0;
unsigned int var_13 = 2936003794U;
unsigned int var_14 = 2497303215U;
unsigned int var_15 = 4184324063U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
