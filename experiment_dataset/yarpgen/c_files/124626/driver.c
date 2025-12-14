#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_4 = -1743227810;
_Bool var_10 = (_Bool)0;
short var_12 = (short)-14854;
unsigned char var_16 = (unsigned char)214;
int zero = 0;
unsigned short var_17 = (unsigned short)12281;
unsigned char var_18 = (unsigned char)226;
unsigned char var_19 = (unsigned char)150;
short var_20 = (short)-23681;
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
