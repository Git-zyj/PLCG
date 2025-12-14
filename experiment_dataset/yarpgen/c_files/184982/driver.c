#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)20955;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)162;
short var_5 = (short)17796;
unsigned int var_6 = 3102048989U;
unsigned char var_7 = (unsigned char)126;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)44;
int zero = 0;
unsigned long long int var_13 = 6167337916577446964ULL;
unsigned char var_14 = (unsigned char)241;
short var_15 = (short)10354;
short var_16 = (short)23498;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
