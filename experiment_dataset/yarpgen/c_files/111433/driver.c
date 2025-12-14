#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2830860564U;
unsigned long long int var_7 = 4605706925522705317ULL;
unsigned short var_8 = (unsigned short)30291;
short var_9 = (short)-872;
unsigned char var_13 = (unsigned char)15;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)2082;
short var_18 = (short)-18630;
void init() {
}

void checksum() {
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
