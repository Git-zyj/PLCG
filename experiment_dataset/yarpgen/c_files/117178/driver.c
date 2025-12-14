#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3297452772960963361LL;
signed char var_4 = (signed char)74;
short var_6 = (short)6485;
unsigned char var_7 = (unsigned char)253;
long long int var_8 = 6512294307583930300LL;
unsigned short var_10 = (unsigned short)56766;
int var_12 = -2102420581;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)21786;
unsigned long long int var_15 = 13226352441887041162ULL;
unsigned char var_16 = (unsigned char)152;
unsigned short var_17 = (unsigned short)22503;
unsigned char var_18 = (unsigned char)154;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
