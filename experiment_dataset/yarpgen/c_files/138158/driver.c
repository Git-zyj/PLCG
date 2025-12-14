#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17742;
unsigned short var_2 = (unsigned short)29293;
long long int var_7 = 6078970002163321559LL;
unsigned int var_10 = 3249507593U;
unsigned int var_12 = 2060680563U;
int zero = 0;
short var_13 = (short)24993;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
