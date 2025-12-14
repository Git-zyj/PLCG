#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 7473766426472332004ULL;
unsigned long long int var_5 = 3471724199842379828ULL;
long long int var_7 = -6016343449388789784LL;
unsigned short var_9 = (unsigned short)45798;
short var_10 = (short)-7237;
_Bool var_11 = (_Bool)1;
short var_16 = (short)18097;
int zero = 0;
unsigned char var_18 = (unsigned char)117;
long long int var_19 = 1852211713258071972LL;
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
