#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8095492015101101690LL;
short var_3 = (short)-7923;
unsigned int var_5 = 3813129373U;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-55;
unsigned int var_14 = 2739243895U;
int var_19 = 982960556;
int zero = 0;
int var_20 = -2049947527;
short var_21 = (short)-21541;
unsigned int var_22 = 301501393U;
unsigned short var_23 = (unsigned short)62542;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
