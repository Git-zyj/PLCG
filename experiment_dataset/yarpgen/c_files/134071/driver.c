#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 83305687U;
int var_3 = 311147570;
int var_4 = 2139859539;
int var_9 = 1118311743;
unsigned int var_10 = 74210895U;
unsigned long long int var_11 = 11046999905993387799ULL;
short var_13 = (short)8292;
int var_16 = -1383914484;
int zero = 0;
unsigned long long int var_19 = 8944890129345037912ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2143078032U;
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
