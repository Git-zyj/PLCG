#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)12450;
long long int var_7 = 5183301891543330798LL;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)26314;
int zero = 0;
int var_14 = -1624672393;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1273946632U;
unsigned long long int var_17 = 12703586012943595339ULL;
unsigned short var_18 = (unsigned short)47815;
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
