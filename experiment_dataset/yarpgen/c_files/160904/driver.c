#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10577;
_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)36433;
unsigned short var_5 = (unsigned short)29928;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)7101;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)33202;
unsigned short var_21 = (unsigned short)16001;
unsigned short var_22 = (unsigned short)44292;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
