#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1954323665;
unsigned short var_12 = (unsigned short)1826;
int var_13 = 1373975307;
short var_14 = (short)7491;
int var_16 = -1034234790;
int var_17 = 2047607773;
int zero = 0;
unsigned short var_18 = (unsigned short)6295;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 17341213208910329279ULL;
unsigned long long int var_21 = 12080900767954708284ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
