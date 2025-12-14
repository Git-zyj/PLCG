#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1981888329;
short var_5 = (short)31802;
signed char var_6 = (signed char)3;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 3813392480315768575ULL;
short var_14 = (short)-22164;
short var_15 = (short)2689;
unsigned short var_16 = (unsigned short)34367;
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
