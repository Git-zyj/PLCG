#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -596662705954728496LL;
unsigned int var_6 = 3478925498U;
signed char var_7 = (signed char)120;
_Bool var_8 = (_Bool)0;
int var_11 = 1683755808;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)57108;
unsigned int var_18 = 2961876509U;
int zero = 0;
unsigned char var_19 = (unsigned char)173;
long long int var_20 = 1522210397435712508LL;
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
