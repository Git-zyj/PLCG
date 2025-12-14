#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned short var_3 = (unsigned short)51359;
signed char var_5 = (signed char)66;
long long int var_6 = -8799368713933895703LL;
short var_9 = (short)2747;
int zero = 0;
signed char var_10 = (signed char)6;
unsigned int var_11 = 830680596U;
long long int var_12 = 1467166298332608427LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
