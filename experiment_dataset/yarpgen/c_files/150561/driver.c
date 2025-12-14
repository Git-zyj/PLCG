#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)45;
signed char var_3 = (signed char)-11;
long long int var_5 = -343056797680140491LL;
int var_8 = -1204953515;
_Bool var_10 = (_Bool)1;
short var_11 = (short)1278;
long long int var_12 = -1388896242834633910LL;
unsigned char var_13 = (unsigned char)142;
int zero = 0;
unsigned char var_14 = (unsigned char)58;
unsigned int var_15 = 532059649U;
short var_16 = (short)-24641;
int var_17 = -1170975325;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
