#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18018;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1946585863U;
unsigned int var_6 = 1438209630U;
signed char var_9 = (signed char)-113;
_Bool var_10 = (_Bool)0;
int var_11 = 962088953;
unsigned short var_12 = (unsigned short)55373;
short var_15 = (short)32199;
int zero = 0;
signed char var_16 = (signed char)-113;
signed char var_17 = (signed char)-101;
signed char var_18 = (signed char)6;
short var_19 = (short)-14;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
