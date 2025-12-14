#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7122013085033094619ULL;
unsigned char var_5 = (unsigned char)121;
_Bool var_6 = (_Bool)1;
short var_7 = (short)32563;
unsigned int var_9 = 2850921055U;
int zero = 0;
int var_13 = 2063319126;
unsigned short var_14 = (unsigned short)53564;
unsigned short var_15 = (unsigned short)53181;
unsigned short var_16 = (unsigned short)39976;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
