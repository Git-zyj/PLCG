#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_4 = (short)23259;
unsigned short var_7 = (unsigned short)37121;
unsigned short var_8 = (unsigned short)60555;
short var_11 = (short)-24373;
unsigned char var_12 = (unsigned char)42;
short var_13 = (short)-16191;
int var_15 = 579218716;
unsigned short var_16 = (unsigned short)10060;
int zero = 0;
unsigned long long int var_19 = 11896645571893377444ULL;
unsigned short var_20 = (unsigned short)44376;
unsigned char var_21 = (unsigned char)1;
int var_22 = -187085554;
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
