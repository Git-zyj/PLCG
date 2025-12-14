#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1602147281;
int var_6 = 411408138;
unsigned short var_9 = (unsigned short)48234;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)7986;
long long int var_18 = -6777493891895570426LL;
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
