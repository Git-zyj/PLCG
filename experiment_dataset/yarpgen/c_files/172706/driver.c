#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18362105181184297209ULL;
unsigned short var_2 = (unsigned short)28011;
short var_6 = (short)32432;
long long int var_9 = 5736736167609653677LL;
unsigned short var_12 = (unsigned short)50403;
unsigned int var_14 = 2136976565U;
unsigned short var_16 = (unsigned short)9286;
int zero = 0;
long long int var_17 = 8264784669883586624LL;
unsigned int var_18 = 85821838U;
unsigned long long int var_19 = 14696333156456551842ULL;
unsigned short var_20 = (unsigned short)23004;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
