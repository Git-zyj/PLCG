#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1748;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
int var_6 = 269306739;
short var_12 = (short)8800;
long long int var_15 = 5594260980017220023LL;
int zero = 0;
unsigned short var_16 = (unsigned short)15091;
int var_17 = -1820151785;
unsigned long long int var_18 = 2688838615038909186ULL;
unsigned char var_19 = (unsigned char)239;
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
