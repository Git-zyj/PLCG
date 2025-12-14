#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1365239570U;
int var_10 = 1106629884;
short var_15 = (short)-26060;
int zero = 0;
unsigned int var_20 = 2523725685U;
unsigned short var_21 = (unsigned short)38729;
unsigned int var_22 = 4036391836U;
unsigned short var_23 = (unsigned short)39215;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
