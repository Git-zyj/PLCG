#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1004;
signed char var_3 = (signed char)-15;
signed char var_7 = (signed char)-66;
short var_10 = (short)-18941;
unsigned short var_14 = (unsigned short)56546;
long long int var_15 = 1213265863494794430LL;
int zero = 0;
unsigned long long int var_16 = 15141949297561757483ULL;
short var_17 = (short)-12120;
long long int var_18 = 2651095814375154094LL;
_Bool var_19 = (_Bool)0;
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
