#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2899709819U;
unsigned int var_2 = 403923471U;
unsigned int var_3 = 363723038U;
unsigned int var_6 = 2279775418U;
unsigned int var_7 = 1751365114U;
long long int var_8 = 2861460153884918927LL;
int zero = 0;
unsigned int var_20 = 2526511157U;
int var_21 = -1636582609;
int var_22 = -494344897;
short var_23 = (short)-902;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
