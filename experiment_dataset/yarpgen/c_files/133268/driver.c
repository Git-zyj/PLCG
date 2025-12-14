#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 176601366;
unsigned int var_2 = 3931051142U;
unsigned long long int var_5 = 15640902407656422838ULL;
long long int var_10 = -2365911257116685120LL;
short var_11 = (short)-24304;
int var_15 = 1012904507;
int zero = 0;
unsigned int var_19 = 2582300083U;
unsigned long long int var_20 = 10285963084308467509ULL;
unsigned char var_21 = (unsigned char)92;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
