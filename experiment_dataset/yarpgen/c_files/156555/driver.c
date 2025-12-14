#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 162617446172663396ULL;
int var_1 = 1535473360;
unsigned int var_10 = 1063742936U;
int zero = 0;
short var_17 = (short)16998;
int var_18 = -476108730;
long long int var_19 = 5758469218618551290LL;
short var_20 = (short)27099;
unsigned short var_21 = (unsigned short)16812;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
