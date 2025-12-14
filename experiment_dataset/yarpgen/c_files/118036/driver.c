#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 87124512;
int var_4 = -789800037;
unsigned char var_6 = (unsigned char)60;
unsigned char var_7 = (unsigned char)221;
unsigned short var_11 = (unsigned short)20201;
long long int var_13 = 1715138170222444865LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
signed char var_17 = (signed char)-95;
unsigned int var_18 = 245394171U;
unsigned char var_19 = (unsigned char)50;
short var_20 = (short)21032;
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
