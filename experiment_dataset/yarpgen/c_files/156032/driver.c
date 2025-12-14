#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2563;
short var_1 = (short)23430;
unsigned int var_2 = 2580748308U;
unsigned int var_4 = 2718014127U;
long long int var_5 = -5956768306163922878LL;
long long int var_7 = -3553770725700326475LL;
unsigned short var_9 = (unsigned short)39158;
short var_10 = (short)24551;
short var_11 = (short)-30127;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)34475;
unsigned short var_14 = (unsigned short)31174;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
