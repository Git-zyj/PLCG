#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15223290810758988647ULL;
short var_1 = (short)304;
long long int var_2 = 2401916099071505598LL;
unsigned short var_3 = (unsigned short)44937;
unsigned short var_4 = (unsigned short)35411;
signed char var_6 = (signed char)45;
unsigned char var_9 = (unsigned char)31;
signed char var_10 = (signed char)-96;
unsigned short var_13 = (unsigned short)16342;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)21;
unsigned short var_17 = (unsigned short)4005;
int zero = 0;
long long int var_19 = 7526390725327068703LL;
unsigned short var_20 = (unsigned short)43411;
long long int var_21 = 4576262202082972993LL;
unsigned char var_22 = (unsigned char)8;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
