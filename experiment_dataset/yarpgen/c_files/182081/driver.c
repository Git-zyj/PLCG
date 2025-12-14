#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14982496098558493760ULL;
unsigned long long int var_5 = 17630721027412990332ULL;
_Bool var_7 = (_Bool)0;
short var_10 = (short)-15366;
unsigned long long int var_11 = 1184028096536971956ULL;
int var_12 = -301656333;
int var_16 = 1686100770;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_20 = (short)-11171;
unsigned int var_21 = 2295526411U;
int var_22 = 1736726752;
_Bool var_23 = (_Bool)1;
short var_24 = (short)25303;
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
