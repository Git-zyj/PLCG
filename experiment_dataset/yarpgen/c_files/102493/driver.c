#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned long long int var_1 = 307874790918907590ULL;
int var_5 = -2052564942;
unsigned int var_6 = 2517691820U;
long long int var_7 = -662388116034053954LL;
int var_15 = 1323702627;
long long int var_18 = -7502873834202359608LL;
int zero = 0;
unsigned char var_19 = (unsigned char)181;
short var_20 = (short)23394;
void init() {
}

void checksum() {
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
