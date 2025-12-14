#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1067634328;
unsigned short var_3 = (unsigned short)33871;
unsigned short var_7 = (unsigned short)13131;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_16 = (signed char)93;
signed char var_17 = (signed char)-91;
unsigned int var_18 = 2071170414U;
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
