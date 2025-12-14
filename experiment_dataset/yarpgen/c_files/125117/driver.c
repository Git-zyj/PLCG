#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11821593497353721497ULL;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)26566;
_Bool var_8 = (_Bool)0;
unsigned short var_10 = (unsigned short)23401;
unsigned char var_11 = (unsigned char)14;
int zero = 0;
short var_13 = (short)-1799;
signed char var_14 = (signed char)-95;
short var_15 = (short)7889;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
