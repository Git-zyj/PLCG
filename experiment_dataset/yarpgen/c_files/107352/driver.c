#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45137;
unsigned long long int var_1 = 18197924258556304472ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_12 = 2407478985U;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)5658;
void init() {
}

void checksum() {
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
