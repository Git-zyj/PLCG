#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13026;
unsigned int var_1 = 1567885256U;
long long int var_2 = -2899491514255969301LL;
unsigned short var_4 = (unsigned short)61419;
int var_7 = -1308549362;
unsigned int var_9 = 3230453109U;
short var_10 = (short)9486;
int zero = 0;
unsigned int var_11 = 4843936U;
short var_12 = (short)-29063;
void init() {
}

void checksum() {
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
