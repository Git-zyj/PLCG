#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = -454427630609150615LL;
unsigned int var_6 = 2858182512U;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)34611;
int zero = 0;
unsigned short var_13 = (unsigned short)26396;
unsigned long long int var_14 = 14253815966712266926ULL;
long long int var_15 = 4703461282200809882LL;
int var_16 = -1799261672;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
