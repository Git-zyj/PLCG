#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24013;
short var_2 = (short)-23624;
int var_4 = 1263775298;
_Bool var_5 = (_Bool)1;
short var_6 = (short)27297;
long long int var_7 = -8744278883986324720LL;
long long int var_9 = 2186365814023829603LL;
int zero = 0;
short var_11 = (short)-15186;
unsigned int var_12 = 4086726592U;
unsigned short var_13 = (unsigned short)43570;
unsigned int var_14 = 3254626677U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
