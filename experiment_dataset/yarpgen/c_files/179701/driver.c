#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1118424109U;
unsigned int var_2 = 1077570923U;
unsigned long long int var_6 = 998877249993746441ULL;
unsigned short var_7 = (unsigned short)12897;
long long int var_10 = -8051294123652819470LL;
unsigned int var_11 = 180397944U;
int zero = 0;
short var_14 = (short)-12325;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
