#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)74;
int var_10 = -1642251260;
unsigned short var_12 = (unsigned short)59343;
unsigned char var_14 = (unsigned char)144;
int var_15 = -1546304654;
int var_16 = -1650365953;
int zero = 0;
unsigned short var_17 = (unsigned short)22845;
int var_18 = -1671147499;
signed char var_19 = (signed char)54;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
