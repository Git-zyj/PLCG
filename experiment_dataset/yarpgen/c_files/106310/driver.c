#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned short var_1 = (unsigned short)2271;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
long long int var_4 = -8067901663136851522LL;
int var_5 = 446929106;
short var_6 = (short)5128;
signed char var_8 = (signed char)76;
short var_12 = (short)-23773;
int zero = 0;
unsigned short var_14 = (unsigned short)50125;
unsigned char var_15 = (unsigned char)251;
unsigned short var_16 = (unsigned short)32144;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
