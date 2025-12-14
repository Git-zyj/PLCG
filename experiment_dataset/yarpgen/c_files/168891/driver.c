#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1263067717;
int var_1 = -1226661625;
int var_10 = 2011684478;
int var_13 = -1740957381;
unsigned short var_14 = (unsigned short)34749;
short var_16 = (short)14901;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-31592;
int zero = 0;
long long int var_19 = -5178069568996786473LL;
long long int var_20 = -3701108451762407404LL;
unsigned short var_21 = (unsigned short)32288;
unsigned char var_22 = (unsigned char)240;
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
