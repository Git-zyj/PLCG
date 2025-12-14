#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -526358514;
_Bool var_3 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_8 = 5316842013235957223LL;
short var_12 = (short)-12701;
short var_17 = (short)-12941;
int zero = 0;
long long int var_18 = 2917177933351824220LL;
unsigned short var_19 = (unsigned short)43547;
unsigned char var_20 = (unsigned char)5;
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
