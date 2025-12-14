#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24784;
unsigned short var_4 = (unsigned short)20986;
_Bool var_6 = (_Bool)1;
unsigned int var_13 = 236227239U;
int zero = 0;
unsigned int var_16 = 1725112543U;
unsigned char var_17 = (unsigned char)27;
unsigned long long int var_18 = 13763951546918577197ULL;
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
