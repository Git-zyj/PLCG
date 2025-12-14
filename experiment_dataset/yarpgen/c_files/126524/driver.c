#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_5 = (unsigned short)46703;
long long int var_8 = -3794763017327012368LL;
short var_12 = (short)-11222;
int zero = 0;
long long int var_18 = 610919250621108559LL;
unsigned char var_19 = (unsigned char)42;
unsigned long long int var_20 = 12275666914898713210ULL;
int var_21 = -218279029;
unsigned short var_22 = (unsigned short)54025;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
