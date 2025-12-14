#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1056562977U;
int var_3 = 570956857;
int var_5 = -743357888;
short var_7 = (short)21564;
int var_10 = 1227896893;
unsigned short var_11 = (unsigned short)3193;
int zero = 0;
unsigned short var_16 = (unsigned short)9687;
unsigned short var_17 = (unsigned short)29701;
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
