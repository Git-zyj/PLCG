#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1141194330;
unsigned int var_6 = 2609885840U;
unsigned int var_8 = 1410686582U;
long long int var_9 = -9021095332369334668LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_15 = (short)-15649;
unsigned short var_16 = (unsigned short)7262;
unsigned int var_17 = 1696017723U;
unsigned char var_18 = (unsigned char)141;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
