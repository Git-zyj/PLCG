#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)9;
long long int var_2 = 9146436232629683924LL;
unsigned int var_8 = 143661222U;
unsigned int var_10 = 3206804180U;
int zero = 0;
unsigned int var_12 = 2085738762U;
unsigned long long int var_13 = 16840006297029842677ULL;
short var_14 = (short)-28207;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 3554755108U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
