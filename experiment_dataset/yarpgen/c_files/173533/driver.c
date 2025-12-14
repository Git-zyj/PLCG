#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-28459;
_Bool var_6 = (_Bool)1;
unsigned long long int var_10 = 8742037703883706650ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)35;
long long int var_14 = 3498139530022728993LL;
unsigned char var_17 = (unsigned char)226;
int zero = 0;
int var_20 = 1288819919;
unsigned short var_21 = (unsigned short)55072;
short var_22 = (short)22649;
short var_23 = (short)3869;
short var_24 = (short)20389;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
