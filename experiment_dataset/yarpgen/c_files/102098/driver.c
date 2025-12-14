#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8123;
long long int var_1 = -7818021090760414036LL;
long long int var_3 = -788837196200379960LL;
int var_4 = -1935602492;
unsigned char var_5 = (unsigned char)250;
unsigned short var_10 = (unsigned short)12481;
unsigned char var_12 = (unsigned char)154;
int zero = 0;
unsigned int var_13 = 3970870046U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 4114705793U;
short var_16 = (short)-19525;
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
