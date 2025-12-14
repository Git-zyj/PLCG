#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -53031284;
int var_2 = -1517170806;
_Bool var_4 = (_Bool)0;
int var_5 = 154411389;
unsigned long long int var_6 = 7321645166941087594ULL;
unsigned char var_13 = (unsigned char)140;
unsigned int var_16 = 4229289935U;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
