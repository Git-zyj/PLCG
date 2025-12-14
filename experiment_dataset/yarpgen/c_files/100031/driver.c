#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1753310287;
unsigned short var_6 = (unsigned short)27838;
unsigned short var_10 = (unsigned short)53624;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)-32;
int zero = 0;
int var_15 = -1218307304;
unsigned int var_16 = 2820621666U;
signed char var_17 = (signed char)24;
void init() {
}

void checksum() {
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
