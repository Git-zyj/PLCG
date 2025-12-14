#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14257176096507330256ULL;
unsigned char var_2 = (unsigned char)125;
int var_3 = 882254068;
int var_4 = 875345857;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1848721905U;
unsigned char var_11 = (unsigned char)176;
int zero = 0;
int var_13 = -193847762;
unsigned long long int var_14 = 15644210457344760948ULL;
unsigned short var_15 = (unsigned short)52171;
unsigned int var_16 = 559595440U;
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
