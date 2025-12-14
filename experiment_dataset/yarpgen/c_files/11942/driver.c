#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
short var_3 = (short)8657;
unsigned char var_6 = (unsigned char)64;
short var_7 = (short)26804;
short var_10 = (short)17533;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_16 = (short)16574;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)230;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
