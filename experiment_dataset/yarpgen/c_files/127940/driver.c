#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2107235335U;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)76;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_16 = -903942460;
unsigned short var_17 = (unsigned short)61796;
_Bool var_18 = (_Bool)1;
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
