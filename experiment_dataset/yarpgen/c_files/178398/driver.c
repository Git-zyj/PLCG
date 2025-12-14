#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4413755657653515635LL;
signed char var_7 = (signed char)100;
long long int var_11 = -8978461290131184703LL;
long long int var_12 = 2842274070684182314LL;
unsigned int var_13 = 929217382U;
int zero = 0;
short var_20 = (short)7756;
long long int var_21 = -7935784636228845080LL;
int var_22 = -341966174;
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
