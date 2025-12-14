#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2124558109;
_Bool var_8 = (_Bool)0;
int var_10 = -947814543;
short var_11 = (short)14448;
long long int var_14 = -6250860978860499385LL;
unsigned short var_15 = (unsigned short)3582;
int zero = 0;
short var_16 = (short)29672;
short var_17 = (short)4100;
unsigned long long int var_18 = 13554855691077639723ULL;
_Bool var_19 = (_Bool)1;
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
