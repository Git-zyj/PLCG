#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4024524867U;
_Bool var_7 = (_Bool)1;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)100;
short var_15 = (short)1766;
int zero = 0;
short var_19 = (short)9145;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)65;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
