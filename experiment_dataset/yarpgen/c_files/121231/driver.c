#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)102;
int var_2 = 1946971500;
unsigned char var_5 = (unsigned char)141;
unsigned char var_11 = (unsigned char)180;
unsigned char var_12 = (unsigned char)173;
unsigned int var_14 = 1069600560U;
unsigned short var_15 = (unsigned short)273;
int zero = 0;
long long int var_16 = -8541373309930998311LL;
int var_17 = -1202971149;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-19433;
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
