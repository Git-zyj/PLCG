#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)169;
short var_5 = (short)-7812;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)218;
int var_14 = 2006415901;
int var_15 = -490426607;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)22634;
void init() {
}

void checksum() {
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
