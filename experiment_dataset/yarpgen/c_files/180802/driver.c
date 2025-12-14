#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)215;
unsigned short var_4 = (unsigned short)667;
long long int var_12 = -2619015980923792745LL;
int zero = 0;
unsigned char var_19 = (unsigned char)244;
unsigned int var_20 = 2299060051U;
short var_21 = (short)7069;
int var_22 = -537538819;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
