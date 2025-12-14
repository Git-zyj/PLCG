#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8519;
unsigned int var_2 = 2060855650U;
unsigned long long int var_3 = 14988796456513030527ULL;
signed char var_4 = (signed char)22;
long long int var_11 = 750860648148631013LL;
int zero = 0;
signed char var_13 = (signed char)33;
signed char var_14 = (signed char)76;
unsigned short var_15 = (unsigned short)7595;
int var_16 = -519246328;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
