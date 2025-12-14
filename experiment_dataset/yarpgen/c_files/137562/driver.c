#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3789286421U;
unsigned long long int var_2 = 3161016227389483003ULL;
_Bool var_3 = (_Bool)1;
int var_7 = 1782512922;
unsigned int var_8 = 357822321U;
unsigned short var_11 = (unsigned short)57879;
unsigned short var_12 = (unsigned short)53573;
int var_14 = 264712346;
int zero = 0;
int var_16 = -805734928;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-4962;
int var_19 = 1766828644;
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
