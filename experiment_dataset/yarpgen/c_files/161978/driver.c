#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58171;
short var_1 = (short)26153;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 876375621709399619ULL;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)84;
short var_7 = (short)-20593;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_11 = (short)-23575;
short var_12 = (short)-4077;
signed char var_13 = (signed char)-41;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
