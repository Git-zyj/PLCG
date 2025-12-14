#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1566659259U;
unsigned short var_1 = (unsigned short)2287;
unsigned char var_2 = (unsigned char)79;
short var_3 = (short)-28093;
short var_4 = (short)-28620;
long long int var_6 = 710343871367625392LL;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)5559;
int zero = 0;
unsigned int var_10 = 1441399264U;
signed char var_11 = (signed char)-24;
unsigned short var_12 = (unsigned short)23070;
unsigned int var_13 = 47323446U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
