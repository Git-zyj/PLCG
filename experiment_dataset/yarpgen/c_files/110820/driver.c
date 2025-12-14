#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)77;
unsigned int var_5 = 2351936498U;
long long int var_6 = -4200001243970732151LL;
long long int var_8 = -7685844987029592226LL;
unsigned long long int var_10 = 4847418072044025047ULL;
unsigned char var_11 = (unsigned char)51;
int zero = 0;
short var_15 = (short)-9291;
unsigned int var_16 = 3498194886U;
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
