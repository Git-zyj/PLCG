#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18513;
signed char var_1 = (signed char)-115;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)233;
unsigned short var_11 = (unsigned short)38436;
short var_12 = (short)29673;
unsigned short var_13 = (unsigned short)17919;
short var_14 = (short)22977;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 1295935426749394172ULL;
long long int var_17 = -8608822799757353940LL;
long long int var_18 = -7503145202510220446LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
