#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)92;
_Bool var_6 = (_Bool)1;
long long int var_7 = -3514945044914494327LL;
signed char var_11 = (signed char)-20;
unsigned short var_12 = (unsigned short)19837;
int var_13 = 388850827;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-13652;
unsigned short var_20 = (unsigned short)24353;
int var_21 = 1132753083;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
