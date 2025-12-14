#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)24465;
long long int var_8 = -6311205314092152325LL;
unsigned int var_10 = 2426925856U;
short var_13 = (short)-2825;
unsigned char var_14 = (unsigned char)105;
unsigned short var_15 = (unsigned short)1042;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)-5625;
unsigned char var_20 = (unsigned char)106;
unsigned long long int var_21 = 76117287052155172ULL;
unsigned int var_22 = 504049906U;
int var_23 = 711846575;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
