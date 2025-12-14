#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-30;
signed char var_3 = (signed char)50;
signed char var_6 = (signed char)-103;
unsigned int var_12 = 2393330149U;
int var_14 = -589861506;
int zero = 0;
unsigned int var_16 = 1265178301U;
int var_17 = -1501112452;
unsigned int var_18 = 1451426001U;
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
