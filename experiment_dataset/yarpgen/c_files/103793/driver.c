#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-20702;
_Bool var_13 = (_Bool)1;
unsigned short var_17 = (unsigned short)21644;
int zero = 0;
unsigned char var_18 = (unsigned char)34;
unsigned long long int var_19 = 17205417544476273526ULL;
void init() {
}

void checksum() {
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
