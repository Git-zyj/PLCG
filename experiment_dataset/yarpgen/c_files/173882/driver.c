#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15323783151483650194ULL;
signed char var_2 = (signed char)59;
short var_5 = (short)-32659;
signed char var_7 = (signed char)-101;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)210;
int zero = 0;
unsigned long long int var_19 = 6191773145241992223ULL;
int var_20 = -428718094;
void init() {
}

void checksum() {
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
