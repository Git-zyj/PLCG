#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2674852637405104372LL;
int var_1 = 184001402;
int var_3 = -319258189;
unsigned char var_4 = (unsigned char)234;
unsigned char var_7 = (unsigned char)214;
short var_9 = (short)-19061;
int zero = 0;
unsigned char var_12 = (unsigned char)10;
unsigned int var_13 = 1084452363U;
long long int var_14 = 9176771664530781615LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
