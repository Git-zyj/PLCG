#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23876;
unsigned int var_5 = 3010884825U;
unsigned long long int var_11 = 10060808042297782591ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-123;
unsigned int var_17 = 2188461262U;
unsigned short var_18 = (unsigned short)35235;
short var_19 = (short)-8202;
unsigned char var_20 = (unsigned char)153;
long long int var_21 = -1874044370015732489LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
