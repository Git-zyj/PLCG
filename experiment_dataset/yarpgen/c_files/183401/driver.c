#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)13;
unsigned short var_3 = (unsigned short)58328;
unsigned short var_6 = (unsigned short)30682;
unsigned int var_7 = 1865416788U;
int var_9 = -1396844123;
int zero = 0;
long long int var_11 = -6604421006311827530LL;
unsigned short var_12 = (unsigned short)47100;
int var_13 = 1407977957;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
