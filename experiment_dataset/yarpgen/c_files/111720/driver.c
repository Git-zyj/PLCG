#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1562144073077102286ULL;
int var_2 = 445354597;
signed char var_7 = (signed char)-62;
long long int var_9 = 8921634714242418826LL;
long long int var_10 = 7989442123475375189LL;
unsigned int var_12 = 2178906933U;
signed char var_13 = (signed char)-54;
signed char var_14 = (signed char)13;
int zero = 0;
signed char var_16 = (signed char)-62;
short var_17 = (short)29006;
unsigned char var_18 = (unsigned char)62;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
