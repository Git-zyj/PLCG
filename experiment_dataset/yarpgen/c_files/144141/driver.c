#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3948009897U;
unsigned int var_3 = 3772096121U;
long long int var_5 = 4634655733214521715LL;
short var_7 = (short)3261;
int zero = 0;
unsigned int var_10 = 1251947956U;
unsigned int var_11 = 3747613424U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
