#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)60646;
short var_6 = (short)32211;
_Bool var_8 = (_Bool)0;
unsigned short var_14 = (unsigned short)18793;
short var_16 = (short)-9010;
int zero = 0;
short var_18 = (short)-5857;
short var_19 = (short)-21955;
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
