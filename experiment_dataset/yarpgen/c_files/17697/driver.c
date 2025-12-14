#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29618;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-28803;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)58717;
int zero = 0;
unsigned short var_16 = (unsigned short)63082;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)51158;
unsigned short var_19 = (unsigned short)54189;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
