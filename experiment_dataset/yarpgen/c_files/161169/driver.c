#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 735436915162202105LL;
short var_1 = (short)-20597;
unsigned char var_3 = (unsigned char)162;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned char var_12 = (unsigned char)26;
int zero = 0;
unsigned long long int var_13 = 1238645188011890323ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8937768421807612563LL;
short var_16 = (short)-16589;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
