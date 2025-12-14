#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1692211574U;
int var_3 = 1216761775;
unsigned short var_9 = (unsigned short)31578;
signed char var_10 = (signed char)23;
unsigned short var_12 = (unsigned short)42705;
unsigned long long int var_14 = 4768044831867860816ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)18047;
unsigned short var_16 = (unsigned short)20160;
void init() {
}

void checksum() {
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
