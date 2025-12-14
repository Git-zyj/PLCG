#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)12935;
int var_6 = 1851484096;
short var_8 = (short)-29383;
unsigned long long int var_16 = 15296756930609375489ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)45506;
int var_19 = -673608663;
short var_20 = (short)-7744;
long long int var_21 = 6823033708980400387LL;
short var_22 = (short)5385;
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
