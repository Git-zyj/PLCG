#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 951604499;
unsigned short var_2 = (unsigned short)54239;
signed char var_3 = (signed char)68;
unsigned short var_4 = (unsigned short)64598;
unsigned short var_6 = (unsigned short)11643;
unsigned short var_7 = (unsigned short)40263;
unsigned short var_8 = (unsigned short)9775;
short var_14 = (short)20722;
int zero = 0;
long long int var_16 = -1070621345266598707LL;
unsigned long long int var_17 = 11507452481412886964ULL;
long long int var_18 = -8416984916652723195LL;
unsigned long long int var_19 = 2736877432328181769ULL;
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
