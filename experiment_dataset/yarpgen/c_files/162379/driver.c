#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7440854110873785390LL;
signed char var_5 = (signed char)-112;
unsigned long long int var_6 = 10469753293099809339ULL;
unsigned int var_10 = 171863958U;
int zero = 0;
int var_11 = -1655264498;
unsigned int var_12 = 1400287688U;
unsigned char var_13 = (unsigned char)177;
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
