#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -7412171;
int var_3 = 122820174;
short var_4 = (short)-30648;
int var_5 = 368791642;
short var_8 = (short)-14317;
unsigned int var_10 = 1480577968U;
unsigned short var_16 = (unsigned short)19136;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)52;
long long int var_19 = 7141801974416606487LL;
void init() {
}

void checksum() {
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
