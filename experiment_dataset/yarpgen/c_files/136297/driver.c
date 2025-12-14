#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7903725050959181732ULL;
unsigned short var_2 = (unsigned short)55084;
long long int var_3 = 7014667842128997814LL;
long long int var_4 = 7277374695374828612LL;
long long int var_6 = -4205404730221484123LL;
unsigned long long int var_7 = 5138240751005169259ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)242;
unsigned short var_14 = (unsigned short)38653;
int zero = 0;
unsigned short var_15 = (unsigned short)44049;
short var_16 = (short)1974;
void init() {
}

void checksum() {
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
