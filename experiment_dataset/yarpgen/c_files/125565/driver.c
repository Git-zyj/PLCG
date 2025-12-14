#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 604534605U;
short var_11 = (short)13518;
short var_15 = (short)17958;
int zero = 0;
long long int var_20 = 6504727380817885930LL;
unsigned long long int var_21 = 13155370971355091600ULL;
signed char var_22 = (signed char)4;
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
