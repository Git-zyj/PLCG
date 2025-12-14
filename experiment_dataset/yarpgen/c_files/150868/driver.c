#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4129032402U;
unsigned int var_1 = 3820407751U;
_Bool var_2 = (_Bool)1;
int var_3 = 1422616634;
unsigned short var_4 = (unsigned short)53600;
unsigned short var_6 = (unsigned short)27784;
int var_7 = 806117850;
unsigned short var_8 = (unsigned short)63792;
unsigned short var_9 = (unsigned short)21802;
int zero = 0;
unsigned short var_10 = (unsigned short)10763;
signed char var_11 = (signed char)-65;
unsigned int var_12 = 2910171187U;
unsigned short var_13 = (unsigned short)1607;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
