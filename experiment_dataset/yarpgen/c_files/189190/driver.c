#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23215;
unsigned short var_2 = (unsigned short)52169;
unsigned int var_3 = 1543410219U;
long long int var_4 = -6594736243868578049LL;
unsigned char var_7 = (unsigned char)178;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 12177886111418574652ULL;
short var_14 = (short)815;
unsigned char var_15 = (unsigned char)128;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
