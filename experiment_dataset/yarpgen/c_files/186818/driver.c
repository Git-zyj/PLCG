#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_4 = -824060678;
unsigned int var_5 = 3448272395U;
int var_10 = 1416018292;
int zero = 0;
unsigned char var_16 = (unsigned char)218;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3022150062U;
void init() {
}

void checksum() {
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
