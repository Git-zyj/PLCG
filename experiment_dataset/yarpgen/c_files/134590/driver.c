#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10690450799154257526ULL;
int var_1 = 1173582306;
short var_2 = (short)-26231;
unsigned short var_3 = (unsigned short)32844;
int var_4 = 1877949748;
unsigned long long int var_14 = 17691138064867366771ULL;
int zero = 0;
short var_17 = (short)-2102;
unsigned int var_18 = 943813838U;
unsigned long long int var_19 = 11932784937144373899ULL;
unsigned short var_20 = (unsigned short)48301;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
