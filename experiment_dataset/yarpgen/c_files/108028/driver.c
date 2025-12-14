#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -698551534;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)212;
unsigned int var_7 = 3546024937U;
int zero = 0;
unsigned short var_14 = (unsigned short)32216;
signed char var_15 = (signed char)51;
int var_16 = -325025264;
int var_17 = 1339042475;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
