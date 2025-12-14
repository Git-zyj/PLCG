#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)8041;
unsigned int var_5 = 876898279U;
unsigned int var_7 = 2437067803U;
_Bool var_11 = (_Bool)0;
unsigned int var_17 = 3253693463U;
int zero = 0;
unsigned short var_18 = (unsigned short)31911;
int var_19 = -965468574;
void init() {
}

void checksum() {
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
