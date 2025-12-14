#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
short var_9 = (short)-6162;
long long int var_10 = -2716957824243232652LL;
long long int var_18 = 6562950092923754270LL;
int zero = 0;
signed char var_20 = (signed char)-80;
signed char var_21 = (signed char)-81;
unsigned long long int var_22 = 788998839829507643ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
