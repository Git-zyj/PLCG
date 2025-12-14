#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18;
long long int var_1 = -6579303902218076429LL;
_Bool var_2 = (_Bool)0;
long long int var_6 = 2847084595946893983LL;
unsigned short var_7 = (unsigned short)60608;
unsigned short var_8 = (unsigned short)10790;
int var_15 = -2130912154;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-17898;
unsigned char var_18 = (unsigned char)85;
unsigned short var_19 = (unsigned short)55235;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
