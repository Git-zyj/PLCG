#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1794361420482719539ULL;
short var_1 = (short)-20922;
short var_2 = (short)-12048;
_Bool var_4 = (_Bool)1;
long long int var_8 = -2190557533717649726LL;
signed char var_12 = (signed char)-80;
int zero = 0;
unsigned long long int var_13 = 8639803739703052438ULL;
unsigned char var_14 = (unsigned char)113;
unsigned char var_15 = (unsigned char)114;
unsigned long long int var_16 = 8624695684375413655ULL;
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
