#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_5 = (unsigned char)22;
unsigned short var_7 = (unsigned short)63986;
_Bool var_10 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)39;
unsigned char var_15 = (unsigned char)132;
int zero = 0;
unsigned char var_16 = (unsigned char)88;
short var_17 = (short)-20164;
_Bool var_18 = (_Bool)1;
int var_19 = -1248532800;
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
