#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2042997200;
int var_1 = -1117354564;
signed char var_2 = (signed char)-86;
unsigned int var_3 = 1816203662U;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)120;
unsigned int var_8 = 2906564627U;
unsigned int var_9 = 3763383592U;
unsigned short var_11 = (unsigned short)5489;
unsigned short var_12 = (unsigned short)38868;
int zero = 0;
unsigned char var_13 = (unsigned char)223;
unsigned short var_14 = (unsigned short)14555;
short var_15 = (short)17455;
unsigned char var_16 = (unsigned char)157;
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
