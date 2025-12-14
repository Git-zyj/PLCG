#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44195;
int var_2 = 1171390084;
short var_5 = (short)-23811;
int var_6 = 2040505166;
unsigned short var_7 = (unsigned short)28724;
int var_8 = -122156340;
short var_14 = (short)27293;
int zero = 0;
unsigned short var_17 = (unsigned short)53612;
unsigned long long int var_18 = 1760558584160995289ULL;
short var_19 = (short)9020;
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
