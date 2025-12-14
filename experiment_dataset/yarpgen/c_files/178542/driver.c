#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)55094;
long long int var_8 = -655893665713397084LL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)54657;
int zero = 0;
unsigned char var_16 = (unsigned char)229;
int var_17 = -1625974824;
short var_18 = (short)9284;
signed char var_19 = (signed char)4;
signed char var_20 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
