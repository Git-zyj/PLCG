#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1676269758;
long long int var_5 = -8763105664937607564LL;
short var_16 = (short)30513;
unsigned char var_17 = (unsigned char)168;
short var_19 = (short)-8687;
int zero = 0;
signed char var_20 = (signed char)80;
_Bool var_21 = (_Bool)1;
int var_22 = -1977122858;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
