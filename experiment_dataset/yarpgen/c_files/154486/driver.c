#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -785743444341941749LL;
unsigned int var_4 = 1378816265U;
unsigned short var_5 = (unsigned short)25875;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_12 = (short)22407;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_14 = 5481508963875796158LL;
short var_15 = (short)-15689;
short var_16 = (short)-24912;
unsigned short var_17 = (unsigned short)39791;
unsigned long long int var_18 = 4582190951872871016ULL;
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
