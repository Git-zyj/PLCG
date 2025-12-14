#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16452;
unsigned long long int var_7 = 7508922688662759993ULL;
signed char var_12 = (signed char)-93;
signed char var_13 = (signed char)18;
int zero = 0;
signed char var_14 = (signed char)-47;
unsigned long long int var_15 = 17351269297740380148ULL;
short var_16 = (short)10329;
signed char var_17 = (signed char)58;
unsigned long long int var_18 = 6250953047893669670ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
