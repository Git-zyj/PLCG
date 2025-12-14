#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)8955;
int var_2 = -2090590717;
int var_3 = 761020901;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_6 = (short)15020;
long long int var_7 = -3357755508292421799LL;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)55530;
int zero = 0;
unsigned int var_12 = 3200426072U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)5198;
int var_15 = 2058822328;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
