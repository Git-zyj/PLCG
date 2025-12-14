#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3212563510U;
unsigned long long int var_4 = 3542018912029407190ULL;
_Bool var_12 = (_Bool)1;
int var_16 = -1843883073;
unsigned int var_19 = 2388352713U;
int zero = 0;
unsigned int var_20 = 40403072U;
_Bool var_21 = (_Bool)1;
short var_22 = (short)6717;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
