#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)64617;
long long int var_7 = -4364290952023567209LL;
unsigned char var_13 = (unsigned char)232;
int zero = 0;
long long int var_14 = 3905561434782838718LL;
short var_15 = (short)-7795;
int var_16 = -1213673702;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)166;
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
