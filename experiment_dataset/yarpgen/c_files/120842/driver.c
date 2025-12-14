#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_4 = (short)22244;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-13576;
unsigned short var_10 = (unsigned short)56117;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)3149;
short var_16 = (short)11716;
unsigned short var_17 = (unsigned short)19863;
int zero = 0;
short var_18 = (short)-31416;
short var_19 = (short)-1417;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
