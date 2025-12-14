#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7399;
short var_1 = (short)-31993;
short var_4 = (short)29249;
unsigned int var_6 = 3540574329U;
unsigned short var_10 = (unsigned short)45463;
signed char var_12 = (signed char)0;
unsigned int var_14 = 4235071616U;
unsigned short var_15 = (unsigned short)22414;
int zero = 0;
unsigned int var_17 = 230406053U;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2476677254U;
unsigned char var_20 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
