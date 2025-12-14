#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -503953452;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
short var_13 = (short)30200;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)50;
unsigned char var_17 = (unsigned char)184;
unsigned char var_18 = (unsigned char)191;
void init() {
}

void checksum() {
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
