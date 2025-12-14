#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1285589274780056185LL;
unsigned long long int var_5 = 5408350877865084557ULL;
unsigned short var_6 = (unsigned short)16942;
signed char var_7 = (signed char)-87;
unsigned int var_10 = 463320065U;
int var_12 = 955375449;
long long int var_15 = -7775602167526106131LL;
int zero = 0;
signed char var_16 = (signed char)-103;
int var_17 = -1487076695;
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
