#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1526434918;
unsigned long long int var_12 = 14706073494688742509ULL;
unsigned long long int var_16 = 17644472023271165768ULL;
int zero = 0;
int var_20 = 1304558592;
short var_21 = (short)20215;
long long int var_22 = 9036162458404149103LL;
unsigned short var_23 = (unsigned short)9401;
unsigned char var_24 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
