#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9328938542231390451ULL;
_Bool var_2 = (_Bool)1;
long long int var_4 = 4368172220325770467LL;
unsigned short var_12 = (unsigned short)50214;
short var_14 = (short)-23069;
int zero = 0;
short var_15 = (short)6128;
unsigned char var_16 = (unsigned char)125;
unsigned char var_17 = (unsigned char)97;
void init() {
}

void checksum() {
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
