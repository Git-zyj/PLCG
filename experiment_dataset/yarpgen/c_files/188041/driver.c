#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6945;
unsigned short var_3 = (unsigned short)21531;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)65;
unsigned char var_9 = (unsigned char)37;
int var_11 = -506848286;
unsigned long long int var_14 = 12576574788077310466ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)30189;
short var_18 = (short)12716;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
