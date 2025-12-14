#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-55;
unsigned short var_4 = (unsigned short)53452;
signed char var_6 = (signed char)-119;
unsigned int var_7 = 505373444U;
_Bool var_14 = (_Bool)0;
unsigned int var_17 = 2316188681U;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 7034522211209857088ULL;
unsigned short var_21 = (unsigned short)16628;
void init() {
}

void checksum() {
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
