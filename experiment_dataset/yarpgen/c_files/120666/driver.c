#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)61715;
unsigned short var_7 = (unsigned short)57820;
unsigned short var_10 = (unsigned short)11;
int zero = 0;
unsigned short var_14 = (unsigned short)56452;
unsigned short var_15 = (unsigned short)60743;
unsigned short var_16 = (unsigned short)45580;
unsigned short var_17 = (unsigned short)25194;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
