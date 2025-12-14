#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
int var_3 = -157734270;
short var_4 = (short)28112;
unsigned int var_5 = 2164952975U;
unsigned long long int var_6 = 10255945909854829501ULL;
short var_14 = (short)15772;
int zero = 0;
short var_15 = (short)7708;
unsigned int var_16 = 2066466327U;
signed char var_17 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
