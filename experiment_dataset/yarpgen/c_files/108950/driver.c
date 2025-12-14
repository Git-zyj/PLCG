#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)81;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned char var_6 = (unsigned char)200;
signed char var_8 = (signed char)(-127 - 1);
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
int var_18 = 1743485245;
unsigned short var_19 = (unsigned short)44067;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
