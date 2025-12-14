#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32004;
short var_2 = (short)-4098;
signed char var_5 = (signed char)70;
unsigned long long int var_6 = 912208579010506089ULL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)7445;
int zero = 0;
unsigned short var_15 = (unsigned short)40824;
unsigned long long int var_16 = 5911380350555160000ULL;
long long int var_17 = 5189096523544947543LL;
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
