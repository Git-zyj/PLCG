#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1245618154;
unsigned short var_3 = (unsigned short)37957;
unsigned long long int var_4 = 6275751257500046228ULL;
unsigned long long int var_5 = 9179570770832111252ULL;
unsigned int var_13 = 3891170524U;
unsigned long long int var_14 = 872997575175589181ULL;
int var_15 = 1678353143;
int zero = 0;
unsigned long long int var_16 = 13489599984497260341ULL;
unsigned long long int var_17 = 8431632797034532543ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
