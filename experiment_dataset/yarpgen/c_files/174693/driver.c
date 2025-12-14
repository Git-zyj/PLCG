#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)42275;
short var_3 = (short)-4296;
short var_5 = (short)-20319;
long long int var_6 = 4667560789757275302LL;
long long int var_11 = -4476651437066734988LL;
long long int var_12 = 1888446385946534972LL;
int zero = 0;
unsigned int var_14 = 2531174377U;
unsigned short var_15 = (unsigned short)29613;
int var_16 = -1959313702;
long long int var_17 = -6035836700796446688LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
