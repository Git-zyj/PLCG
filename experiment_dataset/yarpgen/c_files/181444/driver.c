#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16424;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)21013;
signed char var_5 = (signed char)-124;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1555339839U;
long long int var_11 = -7058128818228007902LL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)166;
short var_14 = (short)21366;
signed char var_15 = (signed char)11;
signed char var_16 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
