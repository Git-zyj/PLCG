#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 766987619;
unsigned short var_12 = (unsigned short)30785;
int var_13 = 274394119;
int zero = 0;
short var_17 = (short)20014;
unsigned short var_18 = (unsigned short)13525;
unsigned long long int var_19 = 12787855382773120674ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
