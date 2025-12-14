#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16396;
unsigned short var_3 = (unsigned short)12482;
long long int var_7 = 6237055310989143946LL;
signed char var_9 = (signed char)-98;
unsigned short var_14 = (unsigned short)8686;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_19 = 5145422106878923029LL;
short var_20 = (short)8341;
short var_21 = (short)-15914;
short var_22 = (short)15461;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
