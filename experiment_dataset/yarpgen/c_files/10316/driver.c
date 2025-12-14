#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1383049820;
int var_3 = 64459161;
signed char var_5 = (signed char)-94;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-13;
int zero = 0;
unsigned long long int var_12 = 3165076907354322956ULL;
long long int var_13 = 247771350343436342LL;
short var_14 = (short)20573;
unsigned char var_15 = (unsigned char)3;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
