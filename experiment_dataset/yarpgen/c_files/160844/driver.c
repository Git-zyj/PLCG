#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1265869229;
int var_4 = -1459337256;
_Bool var_6 = (_Bool)1;
unsigned short var_11 = (unsigned short)28686;
signed char var_13 = (signed char)12;
long long int var_14 = 4046293570778808349LL;
int zero = 0;
long long int var_15 = 2756266058794688122LL;
short var_16 = (short)-28124;
unsigned char var_17 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
