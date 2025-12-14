#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3410500118275950332LL;
short var_5 = (short)10226;
unsigned char var_9 = (unsigned char)82;
unsigned char var_11 = (unsigned char)160;
int var_12 = -835836510;
int var_13 = -1609961741;
unsigned int var_15 = 2004255540U;
int zero = 0;
signed char var_16 = (signed char)-75;
unsigned int var_17 = 270563311U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
