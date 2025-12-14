#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2917697478U;
unsigned short var_12 = (unsigned short)62595;
int var_15 = 813407145;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = -5913010341028938313LL;
int var_21 = 1615657745;
short var_22 = (short)-28910;
signed char var_23 = (signed char)-57;
int var_24 = 1386399270;
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
