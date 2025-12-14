#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 320696849;
unsigned long long int var_6 = 9817046157803662507ULL;
int var_7 = -569482742;
short var_8 = (short)22394;
int zero = 0;
unsigned int var_10 = 1182637664U;
int var_11 = -182722704;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
