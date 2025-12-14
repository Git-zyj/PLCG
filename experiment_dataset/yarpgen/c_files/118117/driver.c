#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2681625154U;
unsigned int var_4 = 863351065U;
short var_5 = (short)28609;
unsigned short var_6 = (unsigned short)22256;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2328354205U;
unsigned long long int var_14 = 5032704299606799821ULL;
long long int var_16 = 3988992158246676800LL;
int zero = 0;
short var_19 = (short)-9894;
unsigned long long int var_20 = 15945394834825695078ULL;
short var_21 = (short)-5821;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
