#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 813807106U;
_Bool var_6 = (_Bool)0;
int var_9 = -1742877346;
unsigned short var_10 = (unsigned short)51027;
short var_13 = (short)310;
int zero = 0;
unsigned short var_16 = (unsigned short)26957;
short var_17 = (short)-1176;
unsigned int var_18 = 499380934U;
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
