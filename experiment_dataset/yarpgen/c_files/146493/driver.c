#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
signed char var_4 = (signed char)-10;
unsigned char var_10 = (unsigned char)183;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 5967369299032177740ULL;
short var_16 = (short)-16183;
short var_17 = (short)25320;
long long int var_18 = 5666784211036507059LL;
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
