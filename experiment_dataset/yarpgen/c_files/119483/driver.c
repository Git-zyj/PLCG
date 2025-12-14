#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 11718494146081149891ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)40643;
short var_4 = (short)32173;
short var_5 = (short)-18127;
int var_6 = -635302401;
unsigned long long int var_7 = 4324095285871438669ULL;
unsigned char var_8 = (unsigned char)24;
int var_9 = 2107377987;
short var_10 = (short)-18721;
long long int var_12 = -3594299780195204484LL;
int zero = 0;
unsigned long long int var_13 = 13733534557724427810ULL;
unsigned short var_14 = (unsigned short)24308;
int var_15 = -327347037;
int var_16 = 239991602;
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
