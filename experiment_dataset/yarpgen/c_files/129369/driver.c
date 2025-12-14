#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
long long int var_2 = -3580424833488608609LL;
short var_8 = (short)30226;
signed char var_11 = (signed char)95;
unsigned int var_13 = 3361604304U;
int zero = 0;
unsigned short var_19 = (unsigned short)16510;
unsigned short var_20 = (unsigned short)16619;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
